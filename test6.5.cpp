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
		void sort();				//�Ӵ�С����
		void Reverse();				//�����鵹��
		Type Sum();					//���
		void display();				//��ʾ��������
	private:
		Type*data;
		int n;
};

template<class Type>				//ð������
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
void Array<Type>::Reverse()				//���鵹��
{
	Type temp;
	for(int i=0;i<n/2;i++)
	{
		temp=data[i];
		data[i]=data[n-i-1];
		data[n-1-i]=temp;
	}
	
}
template<class Type>					//�������
Type Array<Type>::Sum()
{
	Type s=0;
	int i;
	for(i=0;i<n;i++)
	
		s=s+data[i];
		return s;
	

}	
template<class Type>
void Array<Type>::display()				//��ʾ����
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
	cout<<"����a1Ϊ��"<<endl;
	a1.display();
	cout<<endl;
	cout<<"����������Ϊ��"<<endl;
	a1.sort();
	a1.display();
	cout<<endl;
	cout<<"���ú������Ϊ��"<<endl;
	a1.Reverse();
	a1.display();
	cout<<endl;
	cout<<"������ĺ�Ϊ��"<<a1.Sum()<<endl;

	return 0;
	
	
}














