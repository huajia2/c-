# include<iostream>
#include<iomanip>
using namespace std;
template<class Type>
class Array
{
	public:
		Array(Type*d,int i)
		{
			data=d,n=i;
		}
		~Array() {};
		void sort();				//从大到小排序
		void Reverse();				//将数组倒置
		Type Sum();					//求和
		void display();				//显示所有数组
	private:
		Type*data;
		int n;
};

template<class Type>				//冒泡排序
void Array<Type>::sort()
{
	int i,j;
	Type temp;
	for(i=1;i<n;i++)
		for(j=n-1;j>=1;j--)
		  if(data[j-1]<data[j])
		  {
		  	temp=data[j-1];
		  	data[j-1]=data[j];
		  	data[j]=temp;	
		  }
		
}
template<class Type>
void Array<Type>::Reverse()				//数组倒置
{
	Type temp;
	for(int i=0;i<n/2;i++)
	{
		temp=data[i];
		data[i]=data[n-i-1];
		data[n-1-i]=temp;
	}
	
}
template<class Type>					//求数组和
Type Array<Type>::Sum()
{
	Type s=0;
	int i;
	for(i=0;i<n;i++)
	
		s=s+data[i];
		return s;
	

}	
template<class Type>
void Array<Type>::display()				//显示数组
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<data[i]<<" ";
	}
}
int main()
{
	int a[]={5,6,8,9,2,0,4,3};
	Array<int>a1(a,8);
	cout<<"数组a1为："<<endl;
	a1.display();
	cout<<endl;
	cout<<"排序后的数组为："<<endl;
	a1.sort();
	a1.display();
	cout<<endl;
	cout<<"倒置后的数组为："<<endl;
	a1.Reverse();
	a1.display();
	cout<<endl;
	cout<<"该数组的和为："<<a1.Sum()<<endl;

	return 0;
	
	
}














