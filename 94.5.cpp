#include<iostream>
using namespace std;
# define pai 3.14 
class Shape
{
	public:
		Shape();
		Shape(int a,int b);
		virtual double getArea()
		{
			return 0;	
		}
		
		virtual double getLen()
		{
			return 0;
		}
		
		int _a;
		int _b;
};
Shape::Shape(int a,int b)
{
	_a=a;
	_b=b;
};

class Rectangle:public Shape
{
	public:
		Rectangle();
		Rectangle(int a,int b):Shape(a,b)
		{}
		
		double getArea()
		{
			return _a*_b;
		}
		double getLen()
		{
			return 2*(_a+_b);
		}
};
class Circle:public Shape
{
	public:
			Circle();
			Circle(int a):Shape(a,0)
			{}
			double getArea()
			{
				return pai*_a*_a;
			}
			double getLen()
			{
				return 2*pai*_a;
			}
};
int main()
{	
	Rectangle a(4,2);
	cout<<"矩形的面积是："<<a.getArea()<<" "<<"矩形的周长是："<<a.getLen()<<endl;
	Circle b(4);
	cout<<"圆形的面积是："<<b.getArea()<<" "<<"圆形的周长是："<<b.getLen()<<endl;
	return 0;

}



