#include <iostream>
using namespace std;
class Student							//定义休仙人类Student
{
public:									//公有类型
	void study();						//声明表示学习的成员函数
	void exam();	                    //声明表示考试的成员函数
	void magic();

	string _power;			
	string _name;						//声明表示姓名的成员变量
	int _age;							//声明表示年龄的成员变量
};
void Student::magic()
{
	cout <<"拥有十万原力"<< endl;
}

void Student::study()					//类外实现studey()成员函数
{
	cout << "修仙人" << endl;
}
void Student::exam()					//类外实现exam()成员函数
{
	cout << "元婴后期" << endl;
}
int main()
{
	Student stu;						//创建Student类对象
	stu._name = "夜山风";					//设置对象姓名
	stu._age = 99;
	stu._power="拥有十万原力";					//设置对象年龄
	cout << stu._name << stu._age << "岁" << endl;
	cout <<stu._power<<endl;
	stu.study();						//调用study()成员函数
	stu.exam();							//调用exam()成员函数
 	return 0;
}
