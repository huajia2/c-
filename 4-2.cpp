#include<iostream>
using namespace std;
class Animal
{
	public:
		void move();
};
void Animal::move()
{
	cout<<"动物行为"<<endl;
}
class Cat:public Animal
{
	public:
		Cat(string name);
		void walk();
	private:
		string _name;
};
Cat::Cat(string name)
{
	_name=name;
}
void Cat::walk()
{
	cout<<_name<<"会走"<<endl;
}
int main()
{
	Cat cat("猫");
	cat.move();
	cat.walk();
	return 0;
	
}










