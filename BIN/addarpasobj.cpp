#include<iostream>
using namespace std;
class add
{   private:
	int a[10],i=0,k=0,n;
	public:
	
	void get(add l)
	{     cout<<"enter ho many";
	cin>>n;
		cout<<"\t enter 10 no.s\n";
		for(i=0;i<n;i++)
		{
		
	    	cin>>a[i];
		    k=k+a[i];
		    
	    }
	    cout.precision(0);
	    cout<<k<<" avg =:"<<(float)k/n;
	}
	
};

  int main()
  {
  	add obj;
  	obj.get(obj);
  	return 0;
  }
