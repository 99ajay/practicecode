#include<iostream>
using namespace std;
int mat(int n)
{
    int i,j,x;
    x=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            x=x+j;
        }
    }
    return x;
}
int main()
{
   cout<<mat(5)<<endl;//35
}