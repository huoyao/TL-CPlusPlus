#if 0
#include <iostream>
#include <cstdlib>
using namespace std;

struct Node
{
  int val;
  Node *left, *right;
  Node(): left(nullptr), right(nullptr) {}
  Node(const int &v): val(v), left(nullptr), right(nullptr) {}
  ~Node() {}
};

void visit(Node *node)
{
  cout << node->val << " ";
}

void morrisPreOrderTraversal(Node *root)
{
  Node *cur = root, *pre = nullptr;
  while (cur)
  {
    if (!cur->left)
    {
      visit(cur);
      cur = cur->right;
    }
    else
    {
      pre = cur->left;
      while (pre->right && pre->right != cur) pre = pre->right;
      if (!pre->right)
      {
        visit(cur);
        pre->right = cur;
        cur = cur->left;
      } else
      {
        pre->right = nullptr;
        cur = cur->right;
      }
    }
  }
}

void morrisInOrderTraversal(Node *root)
{
  Node *cur = root, *pre = nullptr;
  while (cur)
  {
    if (!cur->left)
    {
      visit(cur);
      cur = cur->right;
    } else
    {
      pre = cur->left;
      while (pre->right && pre->right != cur) pre = pre->right;
      if (!pre->right)
      {
        pre->right = cur;
        cur = cur->left;
      } else
      {
        visit(cur);
        pre->right = nullptr;
        cur = cur->right;
      }
    }
  }
}

void visitReserve(Node *from, Node *to)
{
  if (from->right == to)
  {
    visit(from);
    return;
  }
  Node *cur = from, *pre = from->right, *pre_pre = from->right->right;
  //reverse
  while (pre != to)
  {
    pre->right = cur;
    cur = pre;
    pre = pre_pre;
    pre_pre = pre_pre->right;
  }
  //reverse back and print
  pre = cur->right;
  pre_pre = pre->right;
  do {
    visit(cur);
    pre->right = cur;
    cur = pre;
    pre = pre_pre;
    pre_pre = pre_pre -> right;
  } while (cur != from);
  visit(cur);
}

void morrisPostOrderTraversal(Node *root)
{
  Node *dump = new Node();
  dump->left = root;
  Node *cur = dump, *pre = nullptr;
  while (cur)
  {
    if (!cur->left) cur = cur->right;
    else
    {
      pre = cur->left;
      while (pre->right && pre->right != cur) pre = pre->right;
      if (!pre->right)
      {
        pre->right = cur;
        cur = cur->left;
      } else
      {
        visitReserve(cur->left, cur);
        pre->right = nullptr;
        cur = cur->right;
      }
    }
  }
  delete dump;
}

int main()
{
  Node *head = new Node(1);
  Node *pre = head;
  pre->left = new Node(2);
  pre = pre->left;
  pre->left = new Node(3);
  pre->right = new Node(4);
  head->right = new Node(5);
  cout << "pre order:\n";
  morrisPreOrderTraversal(head);
  cout << "\nin order:\n";
  morrisInOrderTraversal(head);
  cout << "\npost order:\n";
  morrisPostOrderTraversal(head);
  cout << endl;
  system("pause");
  return 0;
}
#endif
