#include<iostream>
using namespace std;
int main()
{
    student s1;//constructor 1

    student s2(101); //constructor 2

    student s3(20,102); //constructor 3

    student s4(s3);//copy constructor

    s1=s2;//no constructor because s1 and 2 already exits in the memory

    student s5=s4;//creating a new object n constructor is called 
    //copy constructor call 


}