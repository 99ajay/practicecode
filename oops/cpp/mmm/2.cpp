#include<iostream>
using namespace std;
void fun(int &a,int &b)
{
    a=a-b;
    b=a+b;
    a=b-a;
    cout<<a<<b<<endl;
}
int main()
{
  int i=5;
  int j=7;
  fun(i,j);//75
}