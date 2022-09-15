#include<iostream>
using namespace std;
#include "vehicle.cpp"
#include "car.cpp"
int main()
{
  vehicle v;
  car c;
  v.print();//vehicle
  c.print();

  vehicle *v1=new vehicle();

  vehicle *v2; 

  v2=&c;

  v1->print();

  v2->print();
}