#include<iostream.h>
#include<conio.h>

class ac
{
	private:
		char name[10];
		int acno;
		float bal;
	public:
		void read()
		{
			cout<<"name\n";
			cin>>name;
			cout<<acno;
			cin>>acno;
			cout<<"bal\n";
			cin>>bal;
		}
		friend void showbal(ac);
		};
		void showbal(ac a)
		{
			cout<<" balance of ac ."<<a.acno<<" is "<<a.bal;
		}
		void main()
		{        clrscr();
			ac k;
			k.read();
			showbal(k);
			getch();
		}
