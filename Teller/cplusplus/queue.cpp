 #if 0
#include <list>
#include <vector>
class User;
using namespace std;

#define RND ((rand()/RAND_MAX))

/// ���������
class Task
{
public:
  // �����Ѿ�ʵ��
  Task(){};
  Task(int userId){};
private:
  int _userId; // �洢�û�id
};

/// \Class ManagedQueue 
/// \�������������洢������������ݽṹ
class ManageQueue
{
public:
  // get
  list<Task*> GetManageQueue() { return _q; }
  vector<int> GetRequetTimes() { return _user_request_times; }
  vector<User> GetUsers() { return _vec_user; }
  vector<double> GetRandomTable() {
    vector<double> _random_table;
    for(size_t i = 0; i < _vec_user.size() - 1; i++)
    {
      if(i == 0)
        _random_table.at(i) = _vec_user.at(i).GetQuot();
      else
      {
        _random_table.at(i) = _random_table.at(i - 1) + _vec_user.at(i).GetQuot();
      }
    }
    return _random_table;
  }
  vector<double> RefreshRandomTable() {
    vector<double> _random_table;
    for(size_t i = 0; i < _vec_user.size() - 1; i++)
    {
      if(i == 0)
        _random_table.at(i) = _vec_user.at(i).GetQuot();
      else
      {
        _random_table.at(i) = _random_table.at(i - 1) + _vec_user.at(i).GetQuot();
      }
    }
    return _random_table;
  }
  bool Dequeue();
private:
  list<Task*> _q;
  vector<int> _user_request_times;
  vector<User> _vec_user;
};

class User
{
public:
  // get&set
  ManageQueue* GetManageQueue() { return _mq; }
  void SetManageQueue(ManageQueue* mq) { _mq = mq; }

  double GetQuot() { return _quot; }
  void SetQuot(double quot) { _quot = quot; }

  void request(Task* task); // �û��������������Դ
private:
  ManageQueue* _mq;
  double _quot;
};

// ManageQueue����ʵ��
bool ManageQueue::Dequeue()
{
  // ��ΪֻҪͳ�����������������У������Ҿ���ʹ��0~1�������
  // popId ����˭
  int popId = -1;
  while(!_q.empty())
  {
    for(size_t i = GetRandomTable().size() - 1; i >= 0; i--)
    {
      if(RND < GetRandomTable().at(i))
      {
        popId = i;
        break;
      }
    }
    for(list<Task*>::iterator iter = _q.begin(); iter != _q.end(); iter++)
    {
      if(iter->_userId == popId)
      {
        _q.erase(iter);
        _user_request_times.at(iter->_userId)--;
      }
    }

    for(size_t i = _vec_user.size(); i > 0; i--)
    {
      if(_user_request_times.at(i) == 0)
      {
        //
      }
    }

  }
  return true;
}

// User����ʵ��
void User::request(Task* task)
{
  _mq->GetManageQueue().push(task);
  _mq->GetRequetTimes().at(task->_userId)++;
}

int main()
{
  // �����������˵��������
  ManageQueue* server_mq;

  // ��������user
  User user1, user2, user3;
  user1.SetQuot(20);
  user2.SetQuot(30);
  user3.SetQuot(50);
  server_mq->GetUsers().push_back(user1);
  server_mq->GetUsers().push_back(user2);
  server_mq->GetUsers().push_back(user3);

  // �û������Ϸ�����
  user1.SetManageQueue(server_mq);
  user2.SetManageQueue(server_mq);
  user3.SetManageQueue(server_mq);

  // �û��������������Դ
  // ÿ���û�request֮ǰ��ʵ����һ��Task
  // ���û�id�ֱ�Ϊ1,2,3
  Task* user1_task = new Task(1);
  user1.request(user1_task);
  Task* user2_task = new Task(2);
  user2.request(user2_task);
  Task* user3_task = new Task(3);
  user3.request(user3_task);
  // ... ������Դ�Ĺ��̴˴���ȥ

  // ���������û��Ѿ��������Դ��
  // ���ڳ���
  server_mq->Dequeue();

  return 0;
}
 #endif
