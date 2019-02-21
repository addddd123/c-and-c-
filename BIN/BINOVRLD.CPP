
#include<iostream>
using namespace std;
class ab{

public:
int a,b;
ab(){}
ab(int m,int n)
{
a=m;
b=n;
}
void show();
ab operator*(ab);

};
void ab::show()
{
cout<<" x=  "<<a<<" y= "<<b<<" ";
}

ab ab:: operator *(ab d)
{
ab q;
q.a=a*d.a;
q.b=b*d.b;
//clrscr();
//cout<<" q.a "<<q.a<<" q.b "<<q.b<<" ";
return(q);
}
 main()
{
//clrscr();
int a1,b1;
cin>>a1>>b1 ;
ab a(a1,b1);cin>>a1>>b1;

ab b(a1,b1),c;

a.show();
b.show();

c=a*b;

c.show();
//getch();
}

