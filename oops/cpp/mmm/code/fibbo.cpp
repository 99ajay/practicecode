#include<iostream>
using namespace std;
long fib(int n)
{
  int a=1;
  int b=2;
  int c=3;
  long int sum=4;
  int count=2;
  while(true)
  {
    int d=a+b+c;
    if(d%2!=0)
    {
        sum=sum+d;
        count++;
        if(count==n)
        {
            break;
        }
    }
    a=b;
    b=c;
    c=d;

  }
  return sum;

}
int main()
{
 int n;
 cin>>n;
 cout<<fib(n)<<endl;
 return 0;
}