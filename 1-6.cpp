#include<iostream>
using namespace std;
void exchange(int& x,int& y)
{
	int t = x;
	x = y;
	y = t;
}
int main()
{
	int a, b;
	cout<< "please input two numbers: "<<endl;
	cin>> a >> b;
	exchange(a, b);
	cout<< "exchange: "<<a<<" "<<b<<endl;
	return 0;
}
