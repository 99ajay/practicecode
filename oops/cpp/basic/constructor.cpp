#include<iostream>
#include "student.cpp"
using namespace std;
int main()
{
//   student s1;
//   s1.display();

//   student s2;

//   student *s3=new student;
//   s3->display();

//   //cout<<"parameterised constructor"<<endl;
//   student s5;
//   student s4(34);
//   s4.display();

//   cout<<"constructor passing two parameter ********************"<<endl;
//   student s6(23,456);

//   s6.display();
//   student *s7=new student(12,78);
//   s7->display();

// student *s2=new student(123,456);
//  cout<<"address of s1 :"<<s2<<endl;
student s1(1234,12345);
cout<<"address of s1 :"<<&s1<<endl;
student s2(78);
s2.display();


} 