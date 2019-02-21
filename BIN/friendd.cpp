#include<iostream>
using namespace std;
class B;
class C
{

	
	//friend void B get();
	
};
class B
{   public:
	/*void get()
	{
		cin>>x>>y;
		if(x>y)
		cout>>"x bigger";
		else cout<<"y bigger";
	}*/
	void k()
	  {  	public:int x,y;
		x=30;
		y=56;
		cout<<x<<y;
	}
	friend B;
};
main()
{  //b bb;
	B obj;
	obj.k();
}
