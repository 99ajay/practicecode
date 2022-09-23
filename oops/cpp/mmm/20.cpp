#include<iostream>
using namespace std;
int fun(int m,int n)
{
    while(m>=n)
    {
        m=m-n;
    }
    return m;
}
int main()
{
cout<<fun(333,11)<<endl;//3
}