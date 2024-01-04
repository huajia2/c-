#include<iostream>
using namespace std;

class Teacher
{
public:
    Teacher(string name, int age, string job);
    void show();

protected: 
    string _name;
    int _age;
    string _job;
};

Teacher::Teacher(string name, int age, string job)
{
    _name = name;
    _age = age;
    _job = job;
}

void Teacher::show()
{
    cout << "老师姓名：" << _name << endl;
    cout << "老师年龄：" << _age << endl;
    cout << "老师工作：" << _job << endl;
}

class Student : public Teacher
{
public:
    Student(string name, int age, string job) : Teacher(name, age, job) {}
    void show();
};

void Student::show()
{
    cout << "学生姓名：" << _name << endl;
    cout << "学生年龄：" << _age << endl;
    cout << "学生工作：" << _job << endl;
}

class Graduate : public Student
{
public:
    Graduate(string name, int age, string job) : Student(name, age, job) {}
    void show();
};

void Graduate::show()
{
    cout << "研究生姓名：" << _name << endl;
    cout << "研究生年龄：" << _age << endl;
    cout << "研究生工作：" << _job << endl;
}

int main()
{
    Teacher tea("老师", 27, "教学");
    Student stu("学生", 18, "学习");
    Graduate gra("a研究生", 24, "教学,学习");
    gra.show();
    stu.show();
    tea.show();

    return 0;
}
