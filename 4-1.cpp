#include<iostream>
using namespace std;
class Student
{
	public:
		void setGrade(string grade);
		void setName(string name);
		string getGrade();
		string getName();
	private:
		string _grade;
		string _name;
};
void Student::setGrade(string grade)
{
	_grade=grade;
}
void Student::setName(string name)
{
	_name=name;	
}
string Student::getGrade()
{
	return _grade;
}
string Student::getName()
{
	return _name;
}
class Undergraduate:public Student
{
	public:
		Undergraduate(string major);
		void show();
	private:
		string _major;
};
Undergraduate::Undergraduate(string major)
{
	_major=major;
}
void Undergraduate::show()
{
	cout<<"姓名:"<<getName()<<endl;
	cout<<"年纪:"<<getGrade()<<endl;
	cout<<"专业:"<<_major<<endl;
}
int main()
{
	Undergraduate stu("画家");
	stu.setName("王桐");
	stu.setGrade("大一");
	stu.show();
	return 0;
}















