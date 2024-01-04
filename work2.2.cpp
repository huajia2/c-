#include <iostream>
using namespace std;
class Student							//定义学生类Student
{
public:									//公有类型
	void study();						//声明表示学习的成员函数
	void exam();	   					//声明表示考试的成员函数
	void wife();
	void setName(string name);			//声明设置姓名的成员函数
	void setAge(int age);				//声明设置年龄的成员函数
	void setMarry(string name);
	string getName();					//声明获取姓名的成员函数
	
	int getAge();						//声明获取年龄的成员函数
private:								//私有类型
	string _name;						//声明表示姓名的成员变量
	string _wife();
	int _age;							//声明表示年龄的成员变量
};
void Student::wife()
{
	cout <<"和夜山风结婚了"<<endl;
}
void Student::study()					//类外实现studey()成员函数
{
	cout << "学习C++" << endl;
}
void Student::exam()					//类外实现exam()成员函数
{
	cout << "C++考试成绩100分" << endl;
}
void Student::setName(string name)		//类外实现setName()成员函数
{
	_name = name;
}
void Student::setMarry(string name)
{
	_name=name;
}
void Student::setAge(int age)			//类外实现setAge()成员函数
{
	if (age < 0 || age > 100)
	{
		cout << "_name" << "年龄输入错误" << endl;
		_age = 19;
	}
	else
		_age = age;
}

string Student::getName()				//类外实现getName()函数
{
	return _name;
}
int Student::getAge()					//类外实现getAge()函数
{
	return _age;
}
int main()
{
	Student stu;						//创建Student类对象stu
	
	stu.setName("杨成龙");					//设置对象stu的姓名
	stu.setAge(19);					//设置对象stu的年龄

 	//调用成员函数getName()和getAge()获取对象stu的姓名、年龄，并输出
	cout << stu.getName() << stu.getAge() << "岁" << endl;
	stu.wife();
						//调用成员函数study()
						//调用成员函数exam()
 	Student stu1;						//创建Student类对象stu1
	stu1.setName("王豪");
	stu1.setAge(18);
	cout << stu1.getName() << stu1.getAge() << "岁" << endl;
	stu1.study();
	stu1.exam();
 	return 0;
}
