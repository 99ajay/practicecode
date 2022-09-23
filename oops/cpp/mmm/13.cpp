#include<iostream>
using namespace std;
int fun(int data[],int n)
{
    int m=0;
    for(int i=1;i<n;i++)
    {
        if(data[i]>data[i-1])
        {
            m=m+1;
        }
    }
    return m;
}
int main()
{
  int arr[]={22,11,12,16,22,18};
  cout<<fun(arr,6)<<endl;//3
  return 0;
}