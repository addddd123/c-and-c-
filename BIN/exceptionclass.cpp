#include<iostream>
using namespace std;

template <class x>
class A
{   public:
	A(x lk)
	{
	cout<<endl<<lk;	
	}
void	AB(x c)
	{
		cout<<endl<<c<<endl;
		
	}
	~A()
	{    int i=0;
		cout<<"\ndestructor called";
	}
	
};
main()
{   
A <int> l(100);
A <char> m('a');
l.AB(5);
m.AB('x') ;
   
}
