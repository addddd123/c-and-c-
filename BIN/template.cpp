#include<iostream>
using namespace std;
template <class X>
X big(X a,X b)
{
	if(a>b)
	return a;
	else return b;
	
}
main()
{
	cout<<big(4,5)<<endl;
	cout<<big(4.5,5.4);
}
