#include<iostream>
#include<iomanip>
using namespace std;
class Clock
{
	public:
		Clock(int hour, int main, int sec);				//声明有参构造函数
		void showTime();
	private:
		int _hour;
		int _min;
		int _sec;
};
Clock::Clock(int hour, int min, int sec)			//需要将成员初始化
{
	_hour=hour;
	_min=min;
	_sec=sec;	
}
void Clock::showTime()
{
	cout<<setw(2)<<setfill('0')<<_hour<<":"		//setw控制输出宽度，setw默认值是右对齐可以通过left进行左对齐。setfill可以设置填充字符。
		<<setw(2)<<setfill('0')<<_min<<":"
		<<setw(2)<<setfill('0')<<_sec<<endl;
} 
int main()
{
	Clock clock1(9,59,59);
	cout<<"北京时间：";
	clock1.showTime();
	return 0;
	
}
