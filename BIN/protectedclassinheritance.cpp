#include<iostream>
using namespace std;
class A{
	protected:
		int x;
};
class B:private A
{
	int y;
	public:
	B()
	{
		x=30;
		y=40;
	}
	void show()
	{
		cout<<"x="<<x<<"y="<<y;
	}
};
int main()
{
	B b;
	b.show();
}
