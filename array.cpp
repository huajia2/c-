#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5};
	int b[]={6,8,9,4,7,3,0,5,1};
	int sum=0;
	cout<<"数组遍历为："<<endl;
	for(int i=0;i<5;i++){
		
		cout<<" "<<a[i];
	}
	cout<<endl;
	cout<<"------------------"<<endl;
	for(int i=0;i<5;i++)
	{
		sum+=a[i];
	}
	cout<<"数组和为："<<sum;
	
	return 0;
}
