#include<iostream>
using namespace std;
int main()
{
	int a=42;
	int& b=a;
	cout<<"变量a的地址"<<&a<<endl;
	cout<<"引用b的地址"<<&b<<endl;
	cout<<"引用b的值"<<b<<endl;
	return 0;
}
