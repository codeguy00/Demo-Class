#include "MyClass.h"
#include <iostream>
#include <string.h>

using namespace std;

void MyClass::setNum(int x)
{
        num = x;
}

int MyClass::getNum()
{
        return num;
}

void MyClass::setRoom(string r)
{
        room = r;
}

string MyClass::getRoom()
{
        return room;
}

void MyClass::setFun(bool f)
{
        fun = f;
}

bool MyClass::getFun()
{
        return fun;
}

