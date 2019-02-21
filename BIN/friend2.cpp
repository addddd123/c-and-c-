
// friend function
#include<iostream>
using namespace std;

class s
{
	char a[10];
        float price;
	public:
void f2()
{
cout<<"enter name price";
		cin>>a>>price;
}

       friend void f(s);
      
};
        void f(s b)
	{
cout<<"name"<<b.a<<"price\n"<<b.price;
		
	}
int main()
{
	s obj;
//l obj2; 
       
	obj.f2();
         f(obj);
    //   s.fb();
	return 0;
}

