#include<iostream>
using namespace std;
class A
{
	int x;
public:
A()
	{
		x=10;
	}
        
        void showx(){
          cout<<"x="<<x;
                  }
};
class B:protected A
{       
	int y;
        public:
	B()
	{
		y=10;
	}
        
	void show()
	{       
                 showx();
		cout<<"y="<<y;
	}
};
int main()
{
	B obj;
	obj.show();
         return 0;
}

