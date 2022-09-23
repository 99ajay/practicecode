#include<iostream>
using namespace std;
int foo(int x)
{
    if(x==0)
    {
        return 0;
    }
    else
    {
        return x+foo(x-1);
    }
}
int main()
{
   cout<<foo(6)<<endl;//21
   return 0;
}