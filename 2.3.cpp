#include<iostream>
using namespace std;
class Student{
public:
	void study();
	void exam();
	void setName(string name);			//声明设置姓名的成员函数
	void setAge(int age);
	string getName();					//声明获取姓名的成员函数
	int getAge();
private:
	string _name;						//声明成员变量
	int _age;
};
void Student::study()
{
	cout << "学习C++" << endl;
}
void Student::exam()
{
	cout << "考试100分" << endl;
}
void Student::setName(string name)			//类外实现steName()成员函数
{
	_name=name;
}
void Student::setAge(int age)
{
	_age=age;	
}
string Student::getName()					//类外实现getAge()成员函数
{
	return _name;
}
int Student::getAge()
{
	return _age;
}
int main()
{
	Student stu;
	stu.setName("张三");
	stu.setAge(20);
	cout << stu.getName() << stu.getAge() << "岁" << endl;
	stu.study();
	stu.exam();
	Student stu1;
	stu1.setName("王一");
	stu1.setAge(18);
	cout << stu1.getName() << stu1.getAge() << "岁" << endl;
	stu.study();
	stu1.exam();
	return 0;
	
}






















