#include <iostream>
using namespace std;

struct Node
{
  int val;
  Node *left, *right;
  Node():left(NULL),right(NULL){}
  Node(const int &v):val(v), left(NULL), right(NULL){}
  ~Node(){}
};

void morris_traversal(Node *root)
{
  Node *p = root, *tmp;
  while(p)
  {
    if(!p->left)
    {
      cout << p->val << " ";
      p = p->right;
    } else
    {
      tmp = p->left;
      while(tmp->right && tmp->right != p) tmp = tmp->right;
      if(!tmp->right)
      {
        tmp->right = p;
        p = p->left;
      } else
      {
        cout << p->val << " ";
        tmp->right = NULL;
        p = p->right;
      }
    }
  }
}

int main()
{
  Node *head = new Node(1);
  Node *tmp = head;
  tmp->left = new Node(2);
  tmp = tmp->left;
  tmp->left = new Node(3);
  tmp->right=new Node(4);
  head->right = new Node(5);
  morris_traversal(head);
  return 0;
}