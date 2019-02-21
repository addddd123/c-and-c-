#include<conio.h>
#include<iostream>
using namespace std;

class ad{
      public:
      int a;
      
      void f();
      };
   inline void ad::f()
      {
    
      if(a%2==0)
      cout<<"even";
      else
      cout<<"odd";
      }
      int main()
      {
      //clrscr();
      ad obj;
      int ad::*p=&ad::a;    // *p is pointer object of class
      cout<<"enter no. to check even odd";
     cin >>obj.*p;

      obj.f();
      getch();
      }
