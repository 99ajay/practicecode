#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
       long long int c=(n-k);
        
        long long int sum=((n*(n-1))/2)-(((n-k)*((n-k)+1))/2);
        //cout<<sum<<endl;
       long long int d=sum-(c*(k-1));
        cout<<(2*(abs(k-n)+(d/k)))<<endl;
    }
    return 0;
}