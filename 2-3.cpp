#include<iostream>
#include<iomanip>
using namespace std;
class Clock{
	public:
		Clock();				//声明无参构造函数
		void showTime();
	private:
		int _hour;
		int _min;
		int _sec;
};
Clock::Clock()
{
	_hour=20;
	_min=00;
	_sec=01;
}
void Clock::showTime()
{
	cout<<_hour<<":"<<_min<<":"<<_sec<<endl;
}
int main()
{
	Clock clock;
	cout<<"clock:";
	clock.showTime();
	return 0;
}
