#include<iostream>
using namespace std;
class Sheep
{
	public:
		Sheep(string name, string color);
		Sheep(const Sheep& another);					//声明拷贝构造函数  构造函数名称（const 类名&对象名）
		void show();
		~Sheep();									//声明构造函数
	private:
		string _name;
		string _color;
};
Sheep::Sheep(string name,string color)
{
	_color=color;
	_name=name;
	cout<<"调用构造函数"<<endl;
}
Sheep::Sheep(const Sheep& another)
{
	cout<<"调用拷贝构造函数"<<endl;
	_name=another._name;
	_color=another._color;
}
Sheep::~Sheep()
{
	cout<<"调用析构函数"<<endl;
}
void Sheep::show()
{
	cout<<_name<<" "<<_color<<endl;
}

int main()
{
	Sheep SheepA("小羊肖恩","白色");
	cout<<"羊A：";
	SheepA.show();
	Sheep SheepB("懒羊羊","白色");
	cout<<"羊B：";
	SheepB.show();
}














