#include <iostream>
using namespace std;
class Counter
{
private:
 int n;
public:
 Counter(int n = 0) :n(n) {}
 void show() const;
 Counter operator+(const Counter& a) const;
 Counter operator-(const Counter& a) const;
};
void Counter::show() const
{
 cout << "(n)=" << "(" << n << ")" << endl;
}

Counter Counter::operator+(const Counter& a) const
{
 return Counter(n + a.n);
}

Counter Counter::operator-(const Counter& a) const
{
 return Counter(n - a.n);

}
int main()
{
 Counter a1(5);
 Counter a2(6);
 Counter a;
 cout << "a1:";
 a1.show();
 cout << "a2:";
 a2.show();
 a = a1 + a2;
 cout << "a:";
 a.show();
 return 0;
}
