#include<iostream>
using namespace std;
template<typename T>

T add(T t1,T t2)
{
	return t1+t2;
}
template int add<int>(int t1,int t2);
int main()
{
	cout<<add<int>(10,'A')<<endl;
	cout<<add(1.1,3.1)<<endl;
	cout<<add<int>(11,1.1)<<endl;
	return 0;
}


//void add(int x,int y)
//{
//	cout<<x+y<<endl;
//}
//void add(double x,double y)
//{
//	cout<<x+y<<endl;
//}
//void add(double x)
//{
//	cout<<10+x<<endl;
//}
//int main()
//{
//	add(1,3);
//	add(1.1,3.1);
//	add(32.4);
//	return 0;
//}
