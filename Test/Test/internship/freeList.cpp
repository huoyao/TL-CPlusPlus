#include <memory>
using namespace std;

struct block
{
  struct block *preblock, *nextblock;
};
class FreeList
{
private:
  void* head;
  struct block* usedBlock;
  struct block* unusedBlock;
  unsigned long blockCnt;
  unsigned long blockSize;
public:
  FreeList(unsigned long blocknum = 32, unsigned long blocksize = 64);
  ~FreeList();
  void* AllocMemory(unsigned long blocksize, bool ifUseList = true);
  void FreeMemory(void*p);
};

FreeList::FreeList(unsigned long blocknum, unsigned long blocksize)
{
  head = usedBlock = unusedBlock = NULL;
  blocksize = blocknum * (blocksize + sizeof(struct block));
  blockCnt = blocknum;

  head = ::malloc(blockSize);

  if(NULL != head)
  {
    for(unsigned long i = 0; i<blocknum; i++)
    {
      struct block *curr = (struct block *)((char *)head + i*(blocksize + sizeof(struct block)));
      curr->preblock = NULL;
      curr->nextblock = unusedBlock;
      if(NULL != unusedBlock)
      {
        unusedBlock->preblock = curr;
      }
      unusedBlock = curr;
    }
  }
}

FreeList::~FreeList()
{
  ::free(head);
}

void* FreeList::AllocMemory(unsigned long blocksize, bool ifUseList)
{
  if(blocksize > blockCnt || false == ifUseList || NULL == head || NULL == unusedBlock)
  {
    return malloc(blocksize);
  }

  struct block *curr = unusedBlock;
  unusedBlock = curr->nextblock;
  if(NULL != unusedBlock)
  {
    unusedBlock->preblock = NULL;
  }
  curr->nextblock = usedBlock;

  if(NULL != usedBlock)
  {
    usedBlock->preblock = curr;
  }
  usedBlock = curr;
  return (void *)((char *)curr + sizeof(struct block));
}

void FreeList::FreeMemory(void* ptr)
{
  if(head<ptr && ptr<(void *)((char *)head + blockSize))
  {
    struct block *curr = (struct block *)((char *)ptr - sizeof(struct block));
    usedBlock = curr->nextblock;
    if(NULL != usedBlock)
    {
      usedBlock->preblock = NULL;
    }
    curr->nextblock = unusedBlock;
    if(NULL != unusedBlock)
    {
      unusedBlock->preblock = curr;
    }
    unusedBlock = curr;
  } else
  {
    free(ptr);
  }
}
