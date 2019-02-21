#include<iostream>
using namespace std;
class life
{
	int mfgyr;
	int expyr;
	int yr;
	public:
		void getyrs()
		{
			cout<<"\n manufacture year :";
			cin>>mfgyr;
			cout<<"\n expiry year :";
			cin>>expyr;
		}
		void period();
};
void life:: period()
{
	yr=expyr-mfgyr;
	cout<<"\n life of product :"<<yr <<"years";
	
}
int main()
{
	life a1;
	a1.getyrs();
	a1.period();
	return 0;
}
