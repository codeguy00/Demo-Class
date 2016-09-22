//complete me
#include "MyClass.h"
#include <iostream>
#include <string.h>
using namespace std;


int main()
{
     MyClass myvar, myvar2;
     int var = 10;
     string str;
     bool ans;
     

     cout<<"var = "<<var<<endl;
     myvar.setNum(var);

     cout<<"Please enter your Room Code"<<endl;
     cin>>str;

     myvar.setRoom(str);
     
     cout<<"Please enter True or False"<<endl;
     cin>>ans;

     myvar.setFun(ans);

     cout<<"Room Info: "<<myvar.getNum()<<" : "<<myvar.getRoom()<<" : "<<myvar.getFun()<<endl;

return 0;     
}
