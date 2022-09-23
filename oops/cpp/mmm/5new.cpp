#include<iostream>
using namespace std;
int foo(int x,int y)
{
    if(x==y)
    {
        return x;
    }
    else if(x>y)
    {
        return foo(x-y,y);
    }
    else{
        return foo(x,y-x);
    }
}
int main()
{
    cout<<foo(24,15)<<endl;//3

}