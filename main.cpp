//complete me
#include "MyClass.h"
#include <iostream>
#include <string.h>
using namespace std;

void print(string pre, MyClass m, string suff)
{
	cout<<pre<<" ( "<<m.getNum()<<" : "<<m.getRoom()<<" : "<<boolalpha<<m.getFun()<<" : " <<suff<<" ) "<<endl;
}

int main()
{
     MyClass myvar, myvar2;
     int var = 10;
     string str;
     bool ans;
     MyClass m1;
     MyClass m2 = {35, "LR10"};
     MyClass m3 = {16, "MSSr6"};
     MyClass m4 = {11, "LT1"};

     
     
/*
     cout<<"var = "<<var<<endl;
     myvar.setNum(var);

     cout<<"Please enter your Room Code"<<endl;
     cin>>str;

     myvar.setRoom(str);
     
     cout<<"Please enter True or False"<<endl;
     cin>>ans;

     myvar.setFun(ans);

     cout<<"Room Info: "<<myvar.getNum()<<" : "<<myvar.getRoom()<<" : "<<myvar.getFun()<<endl;
*/

	print("m1 = ", m1, "\n");
        print("m2 = ", m2, "\n");
	print("m3 = ", m3, "\n");
        print("m4 = ", m4, "\n");
     

return 0;     
}
