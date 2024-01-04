#include<iostream>
using namespace std;
class Student
{
	public:
		void study();
		void exam();
		string _name;
		int _age;
};
void Student::study()
{
	cout << "Ñ§Ï°C++" << endl;
}
void Student::exam()
{
	cout << "C++¿¼ÊÔ100·Ö" << endl;
}
int main()
{
	Student stu;
	stu._name = "ÍõºÀ";
	stu._age = 18;
	cout << stu._name << stu._age << "Ëê" <<endl;
	stu.study();
	stu.exam();
	return 0;
	
	
}
