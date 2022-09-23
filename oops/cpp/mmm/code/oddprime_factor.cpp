#include<iostream>
using namespace std;
bool isprime(int n)
{
    if(n<=1)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }

    }
    return true;
}
int oddfactor(int x)
{int sum=0;
    for(int i=1;i<=x;i++)
    {
        
        if(x%i==0)
        {
        if(i%2!=0 && !isprime(i))
        {
          sum=sum+i;
        }
        }
    }
    return sum;
}
int main()
{
  int n;
  cin>>n;
  cout<<oddfactor(n)<<endl;
  return 0;
}