#include<iostream>
#include "student.cpp"
using namespace std;
int main()
{
    //create object statically 

    student s1;
    student s2;
    student s3,s4,s5;

    //s1.age=24;
    //s1.get
    s1.rollno=101;
    s1.setage(56,123);

    cout<<"s1 age "<<s1.getage()<<endl;
    cout<<"s1 roll number"<<s1.rollno<<endl;

    s1.display();

    s2.setage(30,123);
    s2.display();
   // cout<<s1.age<<endl;
    // cout<<s1.rollno<<endl;


    //creates object dynamically 
    student *s6=new student();
    //(*s6).age=23;
    (*s6).rollno=101;
    s6->setage(-12   ,123);
    s6->display();
    cout<<s6->getage()<<endl;

    //or
    // s6->age=23;
    // s6->rollno=101;
    //  cout<<s6->age<<endl;
    // cout<<s6->rollno<<endl;



}