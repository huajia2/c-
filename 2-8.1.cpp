#include<iostream>
using namespace std;
class Birth
{
	public:
		Birth(int year,int month,int day);
		void show();
		int _year;
		int _month;
		int _day;
	
		
};
Birth::Birth(int year,int month,int day)
{
	_year=year;
	_month=month;
	_day=day;
}

class Student:public Birth
{
	public:
		Student(string name,int id,int year,int month,int day):Birth(year,month,day)
		{
			_name=name;
			_id=id;
		}
		string _name;
		int _id;
		void show();
};
void Student::show()
{
	cout<<"����:"<<_name<<endl;
	cout<<"ѧ�ţ�"<<_id<<endl;
	cout<<"�������ڣ�"<<_year<<"-"<<_month<<"-"<<_day;
}
int main()
{
	Student stu("����",34721,2000,1,1);
	stu.show();
	return 0;
}




