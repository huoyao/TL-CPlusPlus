#if 0
#include <iostream>
#include <queue>
#include <utility>
using namespace std;

struct Node
{
  int val;
  Node *left, *right;
  Node():left(NULL),right(NULL){}
  Node(const int&v):val(v),left(NULL),right(NULL){}
};

class Tree
{
private:
  Node *head;
public:
  Tree():head(NULL){}
  Tree(Node *h):head(h){}
  ~Tree(){}
  void generateTree();
  int getDepth();
};

void Tree::generateTree()
{
  head = new Node(0);
  Node *pt = head;
  pt->left = new Node(1);
  pt->right = new Node(2);
  pt = pt->left;
  pt->right = new Node(3);
  pt = pt->right;
  pt->left = new Node(4);
}

int Tree::getDepth()
{
  queue<Node *> qu[2];
  qu[0].push(head);
  int id0 = 0, id1 = 1,depth=0;
  while(!qu[id0].empty())
  {
    ++depth;
    while(!qu[id0].empty())
    {
      Node *nd = qu[id0].front();
      qu[id0].pop();
      if(nd->left) qu[id1].push(nd->left);
      if(nd->right) qu[id1].push(nd->right);
    }
    swap(id0, id1);
  }
  return depth;
}

int main()
{
  Tree tr;// = new Tree();
  tr.generateTree();
  cout << "Tree depth:" << tr.getDepth()<<endl;
  return 0;
}
#endif
