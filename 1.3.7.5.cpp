#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	s1="hello world";
	s2="I Love China";
	s1.swap(s2);
	swap(s2,s1);
	cout<<s1<<"_ "<<s2<<endl;
	return 0;
		
}
