#include<iostream>
#include<iomanip>
using namespace std;
#define NUM 30
struct Deal {
 string time;
 double amount;
};
class Bank
{
public:
	double _account;
 double _restMoney;
 string _date;
public:
 static struct Deal deals[NUM];
 static int index;
public:
 Bank(int acccout, string date, double restMoney = 0);
 void backin(double money, string date);
 void backout(double money, string date);
 double getMoney();
 void showDeals();
};
struct Deal Bank::deals[30];
int Bank::index = 0;
Bank::Bank(int account, string date, double restMoney)
{
 _account = account;
 _date = date;
 deals[index].time = date;
 deals[index].amount = restMoney;
 index++;
 _restMoney = restMoney;

}
void Bank::backin(double money, string date)
{
 _restMoney += money;
 _date = date;
 deals[index].time = date;
 deals[index].amount = money;
 index++;

}
void Bank::backout(double money, string date)
{
 _restMoney -= money;
 _date = date;
 deals[index].time = date;
 deals[index].amount = -money;
 index++;
}
double Bank::getMoney()
{
 return _restMoney;
}
void Bank::showDeals()
{
 for (int i = 0; i < Bank::index; i++)
 {
  cout << Bank::deals[i].time << "," << Bank::deals[i].amount << endl;
 }
}
int main()
{
 Bank b(1234, "2022-01-1", 1000000);
 b.backin(2000, "2022-06-29");
 cout <<b._account << "的账户余额为" << b.getMoney() << endl;
 b.backout(200, "2024-08-15");
 cout << b._account << "的余额为" << b.getMoney() << endl;
 b.showDeals();
 return 0;

}
