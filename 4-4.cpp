#include<iostream>
using namespace std;
class Engine
{
	public:
		Engine(string type,int power);
		void show();
		~Engine();
	private:
		string _type;
		int _power;
};
Engine::Engine(string type,int power):_type(type),_power(power)
{
	cout<<"调用发动机Engine构造函数"<<endl;
}
void Engine::show()
{
	cout<<"发动机型号："<<_type<<"，发动机功率："<<endl;
}
Engine::~Engine()
{
	cout<<"调用Engine析构函数"<<endl;
}
class Vehicle
{
	public:
		Vehicle(string name);
		void run();
		string getName();
		~Vehicle();
	private:
		string _name;	
};
Vehicle::Vehicle(string name)
{
	_name=name;
}
void Vehicle::run()
{
	cout<<_name<<"正在行驶中"<<endl;
}
Vehicle::~Vehicle()
{
	
}
class Car:public Vehicle
{
	public:
		Car(int seats,string color,string type,int power,string name);
		void brake();
		void display();
		~Car();
		Engine engine ;
	private:
		int _seats;
		string _color;
};
Car::Car(int seats,string color,string type,int power,string name):engine(type,power),Vehicle(name)
{
	_seats=seats;
	_color=color;
}
void Car::brake()
{
	cout<<getName()<<"停车"<<endl;
}
void Car::display()
{
	cout<<getName()<<"you"<<_seats<<"个座位，"<<"颜色为："<<_color<<endl;
}
Car::~Car()
{
	
}
int main()
{
	Car car(5,"red","P658",130,"passat");
	
	car.run();
	car.brake();
	car.display();
	car.engine.show();
}















