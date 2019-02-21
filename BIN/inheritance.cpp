#include<iostream>
using namespace std;

class A
{
    
         public: 
int x;
          
};
class B:public A
{
	public:
		int y;
void show()
{
                    cout<<"adnan";
}
 
            
};
class C:public B
{

public:
       void zk() 
{
cout<<"\nzzz";
}
};

int main()
{
	
        C v;
	v.x=10;
	v.y=30;
        v.show();
        v.zk();


	cout<<"member of A\n"<<v.x;
	cout<<"member of B:\n"<<v.y;
	return 0;
}

