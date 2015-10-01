#if 0
//======================================
// problem one
struct pair_t {
  int a, b;
};
struct node_t {
  int a, b;
  node_t *left, *right;
};

bool cmp0(const pair_t &p1, const pair_t &p2)
{
  return p1.a < p2.b;
}

int findMax(pair_t *p, int &s1, int &e1)
{
  maxe = s1;
  for (int i = 1; i <= e1; ++i)
  {
    if (p[i] > p[maxe]) maxe = i;
  }
  return maxe;
}

node_t * buildTree(pair_t* pair, int &s1, int &e1)
{
  if (s1 > e1) return NULL;
  node_t *head = new node_t();
  int maxe = findMax(pair, s1, e1);
  head->b = pair[maxe].b;
  head->a = pair[maxe].a;
  head->left = buildTree(pair, s1, maxe - 1);
  head->right = buildTree(pair, maxe + 1, e1);
  return head;
}

node_t* build(pair_t* pair, int n)
{
  if (n <= 0) return NULL;
  sort(pair, pair + n, cmp0);
  return buildTree(pair, 0, n - 1);
}

问题二：
假设根节点root，新插入法的节点为node。
先通过a二分查找找到应该插入的节点的位置，使整颗树满足二叉树的性质，在查找的同时检查是否违背的最大堆的性质。
如果没有违背最大堆性质，插入成功。
如果违背最大堆性质，则进行最大堆的调整过程。

分情况讨论如下，假设根节点root，新插入法的节点为node

1. a > root.a && a < root->right.a && b > root.b
node替换root，root = node->left;

2.

//======================================
// problem two
int recv(char* buf, int len);

char* read_line() {
  static string  str = "";
  const int len = 100;
  string ret = "";
  char *buf = new char(len)
  bool isok = false;
  int end = 0;
  while (!isok)
  {
    int len_back = recv(buf, len);
    str += string(buf, buf + len_bak);
    while (end < str.length() && str[end] != '\n') end++;
    if (end < str.length()) {
      ret += string(str, end + 1);
      isok = true;
      str = string(str, end + 1, str.length() - end);
    }
  }
  return ret.c_getStr();
}


//======================================
// problem three
class  p
{
public:
  p();
  ~ p();
  virtual std::string unpress(string &);
  virtual std::string press(string &);

  template<class T>
  std::string trans(T *a, T *b)
  {
    P* aa = a;
    P* bb = b;
    string outstr = aa->unpress(a.getStr());
    return bb->press(outstr);
  }

};

class A: public P
{
  string str;
public:
  A();
  ~A();
  std::stirng getStr() {return str;}
  std::string unpress(string &str)
  {
    return aunzip(str);
  }
  std::string press(string &str)
  {
    return anzip(str);
  }

};

class B: public P
{
  string str;
public:
  B();
  ~B();
  std::stirng getStr() {return str;}
  std::string unpress(string &str)
  {
    return base64decode(str);
  }
  std::string press(string &str)
  {
    return base64encode(str);
  }
};

class C: public P
{
  string str;
public:
  C();
  ~ C();
  std::stirng getStr() {return str;}
  std::string unpress(string &str)
  {
    std::string outstr;
    if (bunzip(str, outstr))
    {
      return base64decode(outstr);
    }
    return "";
  }
  std::string press(string &str)
  {
    std::string outstr;
    if (bzip(str, outstr))
    {
      return base64encode(outstr);
    }
    return "";
  }

};
#endif
