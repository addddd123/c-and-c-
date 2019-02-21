#include<iostream>
using namespace std;
class b;
class a

{
public: int x,y;

//friend void b get();

};
class b
{
public:

  void get()
    {
       /* cin>>x>>y;
    
   
    if(x>y)
    cout<<"x is greater";
    else 
    cout<<"y is greater"; *///
    }
};
int main()
{
    b obj;
    obj.get();
    return 0;
}