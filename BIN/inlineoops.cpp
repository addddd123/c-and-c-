#include<iostream>
#include<stdio.h>
using namespace std;
class ad
{

public:
     int a;
     inline void even();
};
inline void ad::even()
              {
     //cout<<" enter no:";
    //cin>>a;
    if(a%2==0)
    printf("\n no. is even");
    else
    cout<<"\n oddno\n";
            }
int main()
{
ad obj;int k;
int ad::*p=&ad::a;

obj.*p=7;
}
