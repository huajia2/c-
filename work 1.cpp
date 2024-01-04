#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double f=3.1415926;
	cout<<"默认输出："<<f<<endl;
	cout<<"默认精度："<<setprecision(7)<<setiosflags(ios::fixed)<<f<<endl;
	return 0;
	
}
