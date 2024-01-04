#include<iostream>
using namespace std;
int main()
{
int a[8]={6,8,2,4,9,5,3,7};
int temp=a[0];
for(int i=0;i<7;i++) {
	for(int j=0;i<7-j;j++){
		if(a[j]>a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			//TODO
		}
	}
}
for(int i=0;i<8;i++){
	cout<<a[i]<<" ";
}
return 0;
}


