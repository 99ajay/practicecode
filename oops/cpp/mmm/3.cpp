#include<iostream>
using namespace std;
void foo(int x)
{
    int y;
    if(x<10)
    {
        cout<<(x);
        
         
    }
    else{
         y=x%10;
    
    
    foo(x/10);
    cout<<(y);
    }
}

int main()
{
  foo(3729);//3729
}