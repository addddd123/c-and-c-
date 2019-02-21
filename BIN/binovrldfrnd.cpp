
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
friend ab operator*(ab,ab);

};
void ab::show()
{
cout<<" x=  "<<a<<" y= "<<b<<" ";
}

 ab ab:: operator *(ab d ,ab l)
{
ab q;
q.a=q.a*l.a;
q.b=q.b*l.b;
return(q);
//clrscr();
//cout<<" q.a "<<q.a<<" q.b "<<q.b<<" ";

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

