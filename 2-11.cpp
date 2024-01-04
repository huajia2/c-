#include<iostream>
using namespace std;
class Person
{
	public:
		Person(string name,int age,string addr,string favFruit);
		~Person();
		void place() const;
		void myInfor() const;
		void myInfor();
	private:
		const string _name;
		const int _age;
		 string _addr;
		const string _favFruit;
};
Person::Person(string name,int age,string addr,string favFruit):_name(name),_age(age),_addr(addr),_favFruit(favFruit)
{}
void Person::myInfor() const
{
//	_favFruit="榴莲";
//	place();
	cout<<"我叫"<<_name<<"今年"<<_age<<"岁"<<"我喜欢吃"<<_favFruit<<endl;
}
Person::~Person(){}
void Person::myInfor()
{
	
	cout<<"我叫"<<_name<<"今年"<<_age<<"岁"<<"我喜欢吃"<<_favFruit<<endl;
	place();
	
	
}
void Person::place() const
{
	cout<<"我住在"<<_addr<<endl;
}
int main()
{
	Person Person1("小桐",18,"北大街","西瓜");
	Person1.myInfor();
	const Person p2("王桐",18,"毛柳村","红薯");
	p2.myInfor();
	return 0;	
}
