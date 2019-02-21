##include<iostream>
using namespace std;
class life
{
    private:
		int mfg;
		int exp;
		int yr;
		public:
			void getyrs()
			{
				cout<<"manufacture year";
				cin>>mfg;
				cout<<"expr yr";
				cin>>exp;
			}
			void period(life );
};
		void life::period(life y1)
      {
      	yr=y1.exp-y1.mfg;
      	cout<<"life of prdct: "<<yr<<"years";
	  }
	  int main()
	  {
	  	life a1;
	  	a1.getyrs();
	  	a1.period(&a1);
	  	return 0;
	  }

