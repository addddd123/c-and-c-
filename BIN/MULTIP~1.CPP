#include<iostream.h>
#include<conio.h>

class A
{
	protected:
		int a;
};
class B
{
	protected:
		int b;
};
class C
{
	protected:
		int c;
};
class D
{
	protected:
		int d;
};
class E:private B,C,D,A
{       public:
	int e,p,q,r,s,t;

		void getdata()
	{
		cout<<"enetr value of a,b,c,d,e\n";
		cin>>a>>b>>c>>d>>e;

	}
		void showdata()
	{
		cout<<"\n a="<<a<<"b="<<b<<"c="<<c<<"d="<<d<<"e="<<e;
		p=a;q=b;r=c;s=d;t=e;
	}


};

class F:public E
{
int i;
public:
F()
{
i=3000;
}
public:
void ax()
{
cout<<"\np="<<p<<"q="<<q<<"r="<<r<<"s="<<s<<"t="<<t<<"i="<<i;
}
};
void main()
{
	F x;    clrscr();
	x.getdata();
	x.showdata();
	x.ax();
	getch();
}
