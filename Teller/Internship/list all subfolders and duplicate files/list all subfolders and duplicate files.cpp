#if 0
/*
2015-4-1 09:37:21 
2015-03-31 14:30--17:00 at Kujiale
get all subfolders and files withn it, rename these files and delete
the duplicate ones, then, move them into a new folders. Meanwhile output
the duplicate ones int target folder .
*/

#include <fstream>
#include <vector>
#include <string>
#include <unordered_map>
#include "dirent.h"
using namespace std;

class FileSys
{
public:
  FileSys(){};
  ~FileSys(){};
  FileSys(const string &old,const  string &newP,const string &file_p)
    :old_path(old), new_path(newP),out_path(file_p){};
  void listAllSubfolders();
  void compFile();
private:
  vector<string> filename,mid_path;
  unordered_map<string, string> path_map;
  string old_path, new_path,out_path;
};

void FileSys::listAllSubfolders()
{
  DIR *dir=opendir(old_path.c_str());
  dirent *entry = readdir(dir);
  while(entry)
  {
    if(entry->d_type == DT_DIR) mid_path.push_back(old_path+entry->d_name);
    entry = readdir(dir);
  }
  int cnt = 0;
  for(int i = 2;i < mid_path.size();++i)
  {
    dir = opendir(mid_path[i].c_str());
    entry = readdir(dir);
    while(entry)
    {
      string new_name = to_string(cnt) + ".txt";
      if(entry->d_type == DT_REG)
      {
        filename.push_back(new_name);
        path_map[new_name] = mid_path[i] +"/"+ string(entry->d_name);
        ++cnt;
      }
      entry = readdir(dir);
    }
  }
}

void FileSys::compFile()
{
  int cnt = filename.size();
  for(int i = 0;i < cnt;++i)
  {
    if(filename[i] == "") continue;
    ifstream if1(path_map[filename[i]]),if2;
    ofstream of1(new_path + filename[i]);
    char c,cc;
    while(!if1.eof())
    {
      if1 >> c;
      of1 << c;
    }
    of1.close();
    if1.close();
    bool first = true;
    for(int j = i + 1;j < cnt;++j)
    {
      if1.open(path_map[filename[i]]);
      if2.open(path_map[filename[j]]);
      while(!if1.eof() && !if2.eof())
      {
        if1 >> c;
        if2 >> cc;
        if(c != cc) break;
      }
      if(if1.eof() && if2.eof()) filename[j] = "";
      if(first && if1.eof() && if2.eof())
      {
        first = false;
        if1.close();
        if1.open(path_map[filename[i]]);
        of1.open(out_path + filename[i]);
        while(!if1.eof())
        {
          if1 >> c;
          of1 << c;
        }
        of1.close();
      }
      if1.close();
      if2.close();
    }
  }
}

int main()
{
  string old_p = "./old/", new_p = "./new/",file_path="./new/out/";
  FileSys fsys(old_p, new_p,file_path);
  fsys.listAllSubfolders();
  fsys.compFile();
  return 0;
}
#endif
