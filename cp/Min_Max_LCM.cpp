#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
       long long int x,y;
        cin>>x>>y;
        long long int c=x*y;
        cout<<(2*x)<<" "<<(c)*(c-1)<<endl;
    }
}