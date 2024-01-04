#include<iostream>
using namespace std ;
class Bank
{
	public:
		account(int num,double balance);
		friend class Date;
	private:
		int _num;
		double _balance;
	
};
class Date
{
	public:
		Time(int year,int month,int day);
		showTime(Time& time);
		int _year, _mouth, _day;
};
Date::(int year,int month,int day)
{
	_year= year;
	_mouth= month;
	_day= day;
}
void Date::showTime(Time& time)
{
	cout <<_year<<"-"<<_mouth<<"_"<<_day
}
