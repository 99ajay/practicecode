#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int x,y;
    cin>>x>>y;
    int d=abs(y-x);
    if(x<y)
    {
    if(d%2==0)
    {
        cout<<(d/2)<<endl;
    }
    else
    {
        cout<<(d/2)+2<<endl;
    }
    }
    else
    {
        cout<<d<<endl;
    }
    }
    return 0;
}