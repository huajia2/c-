#include<iostream>
using namespace std;
template<typename T,int t>
T max(T b[t])
{
	T temp=b[0];								//从第一个数开始比较
	for(int i=0; i<t; i++)
	{
		if( temp < b[i])
		{
			temp=b[i];
			
		}
	}
	return temp;
}

int main()
{
	int ai[6]={10,21,42,5,7,9};
	cout<<max<int,6>(ai)<<endl;
	return 0;
}

