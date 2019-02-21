#include<iostream>
using namespace std;
#include<fstream>
main()
{
	ofstream fout;
	fout.open("abcdefgh.apk");
	fout.close();
	return 0;
}
