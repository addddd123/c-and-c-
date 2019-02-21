#include<fstream>
#include<iostream>
using namespace std;
int main()
{

ofstream fout;
ifstream fin;
char ch;
fout.open("my.dat");
fout<<"hello ";
fout.close();
fout.open("my.dat",ios::app);
fout<<"hello ";
fout.close();
fin.open("my.dat");
ch=fin.get();
while(!fin.eof())
{
cout<<ch;
ch=fin.get();
}
fin.close();
}
