#include<iostream>
using namespace std;
int bsd(int arr[],int n,int k)
{
   int start =0;
   int end=n-1;
   while(start<=end)
   {
       int mid=start+((end-start)/2);
       if(arr[mid]==k)
       {
           return mid;
       }
       else if(k<arr[mid])
       {
           start=mid+1;
       }
       else 
       {
           end=mid-1;
       }
   }
   return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<"element is present at the position of : "<<bsd(arr,n,k)<<endl;
    return 0;
}