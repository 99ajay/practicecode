#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    int age;
    //char name[100];//not do show
    char *name;

    public:
    Student()
    {

    }
    Student(int age,char *name)
    {
      this->age=age;
      //shallow copy
      //this->name=name;

      //deep copy
      this->name=new char[strlen(name)+1];
      strcpy(this->name,name);

    }
    void display()
    {
        cout<<name<<" "<<age<<endl;
    }
};