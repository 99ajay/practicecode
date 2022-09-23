#include<iostream>
using namespace std;
long fin(int n)
{
    int a=1;
    int b=2;
    int c=3;
    if(n==1)
    {
        return 1;

    }
    if(n==2)
    {
        return 4;
    }
    else{
    int sum=0;
    sum=sum+4;int count=2;
    while(true)
    {
          int d=a+b+c;
          a=b;
          b=c;
          c=d;
          if(d%2!=0)
          {
            sum=sum+d;
            count++;
            if(count==n)
            {
                break;
            }
          }
    }
    return sum;
    }
}
int main()
{
  int n;
  cin>>n;
  cout<<fin(n)<<endl;
  return 0;
}