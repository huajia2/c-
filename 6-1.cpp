#include<iostream>
using namespace std;
template<typename T>
void swap(int& t1,int& t2)
{
	int temp=t1;
	t1=t2;
	t2=temp;
}
int main()
{
	int a,b;
	cout<<"please intput two numbers:"<<endl;
	cin>>a>>b;
	swap(a,b);
	cout<<"swap:"<<a<<" "<<b<<endl;
	return 0;
	
}
//T add(T t1,T t2)
//{
//	return t1+t2;
//}
//int main()
//{
//	cout<<add(1,3)<<endl;
//}
