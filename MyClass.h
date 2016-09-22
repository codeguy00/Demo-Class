#ifndef MYCLASS_H
#define MYCLASS_H
#include <iostream>
#include <string.h>

using namespace std;

class MyClass
{
     private:
              int    num;
              string room;
              bool   fun;

      public:
              void setNum(int x);
              int  getNum();
              void setRoom(string r);
              string getRoom();
              void setFun(bool f);
              bool getFun();

};

#endif

