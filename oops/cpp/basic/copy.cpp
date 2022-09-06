#include<iostream>
#include "student.cpp"
using namespace std;
int main()
{
//  student s1(21,1001);
//  cout<<"s1 : ";
//  s1.display();
//  student s2(s1);

//  cout<<"s2 : ";
//  s2.display();

//  student *s3=new student(20,2001);
//  cout<<"s3 : ";
//  s3->display();
//  student s4(*s3);
//  cout<<"s4 : ";
//  s4.display();

//  student *s5=new student(*s3);
//  cout<<"s5 : ";
//  s5->display();

//  student *s6=new student(s1);
//  cout<<"s6 : ";
//  s6->display();


//*******copy assignment operator************
student s1(10,1001);
student s2(20,2001);

student *s3=new student(30,3001);

s2=s1;

*s3=s1;

s2=*s3;


}