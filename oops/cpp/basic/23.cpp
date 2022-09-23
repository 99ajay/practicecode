#include<iostream>
using namespace std;
int eval(int a,int b)
{
    if(a>0 || b>0)
    {
        return 1;
    }
    else if(b>=0)
    {
        return 2;
    }
    else if(a>0)
    {
        return 3;
    }
    return 4;
}
int main()
{

}