#include<iostream>
using namespace std;
#include "student.cpp"
int main()
{
  student s1;
  student s2;
  student s3,s4,s5;
  //create objects dynamically 
  //student *s6=new student;
  //s1.age=24;
  s1.rollnumber=101;
  cout<<"s1 age "<<s1.getage()<<endl;
  cout<<s1.rollnumber<<endl;
  s1.display(); 
  s2.display();

  //s2.age=40;
  student *s6=new student;
  (*s6).age=23;
  (*s6).rollnumber=194;
  (*s6).display(); 
  cout<<"s6 age "<<s6->getage()<<endl;
 // s6->age=34;
  //s6->rollnumber=23;




}