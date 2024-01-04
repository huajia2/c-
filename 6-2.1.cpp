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
	cout<<add<int>(10,1.1)<<endl;
	cout<<add(1.1,2.2)<<endl;
	return 0;
}
