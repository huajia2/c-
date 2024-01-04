#include<iostream>
using namespace std;
void add(int x,int y)
{
	cout <<"int: "<<x+y<<endl;
}
void add(double x)
{
	cout<<"double: "<<0.2+x<<endl;
}
double add(double x, double y)
{
	return x+y;
}
int main()
{
	add(10.2);
	add(1,32);
	return 0;
}
