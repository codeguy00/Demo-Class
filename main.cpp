//complete me
#include "MyClass.h"
#include <iostream>
#include <string.h>
#include <vector>
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
     int tempnum;
     string tempstr;
     bool tempbl;

     vector<MyClass> M;
     
     M.push_back(m1);
     M.push_back(m2);
     M.push_back(m3);
     M.push_back(m4); 
     
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
   for(int i = 0; i < 4; i++)
   {
	cout<<"Please enter int string and bool for MyCass "<<endl;
	cin>>tempnum>>tempstr>>tempbl;

	M[i].setNum(tempnum);
	M[i].setRoom(tempstr);
	M[i].setFun(tempbl);
   }

	print("m1 = ", m1, "\n");
        print("m2 = ", m2, "\n");
	print("m3 = ", m3, "\n");
        print("m4 = ", m4, "\n");
     

return 0;     
}
