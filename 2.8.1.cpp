#include<iostream>
using namespace std;
class Sheep
{
	
	public:
		Sheep (string name,string color);
		void show();
	private:
		string _name;
		string _color;		
};
void Sheep::show()
{
	cout<<_name<<" "<<_color<<endl;
}
Sheep::Sheep(string name,string color)
{
	_color=color;
	_name=name;
}
int main()
{
	Sheep SheepA("Ð¡ÑòÐ¤¶÷","°×É«");
	cout<<"ÑòA£º";
	SheepA.show();
	Sheep SheepB("ÀÁÑòÑò","°×É«");
	cout<<"ÑòB:";
	SheepB.show();
		
}
