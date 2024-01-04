#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Rabbit
{
	public:
		Rabbit(string name,const char *pf);
		void show();
		~Rabbit();												//析构函数无参，无返回值
	private:
		string _name;
		char* _food;
};
Rabbit::Rabbit(string name,const char *pf)
{
	cout<<"调用构造函数"<<endl;
	_name=name;
	_food=new char[50];
	memset(_food,0,50);
	strcpy(_food,pf);
	
}



















