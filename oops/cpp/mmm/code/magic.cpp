#include<iostream>
using namespace std;
int magic(int x,int n)
{
    int count=0;
    int num=1;
    int sum=0;
    while(x>0)
    {
        int rem=x%10;
        int y=(rem+n)%10;

        sum=sum+(y*num);
        num=num*10;
        x=x/10;

    }
    return sum;
}
int main()
{
  int x;
  cin>>x;
  int n;
  cin>>n;
  cout<<magic(x,n)<<endl;
  return 0;
}