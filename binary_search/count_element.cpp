#include<iostream>
using namespace std;
int fo(int arr[],int n,int k)
{
    int start=0;
    int end=n-1;
    int result=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(k==arr[mid])
        {
           result=mid;
           end=mid-1;
        }
        else if(k<arr[mid])
        {
            end=mid-1;
        }
        else 
        {
            start=mid+1;
        }
    }
    return result;
}
int lo(int arr[],int n,int k)
{
    int start =0;
    int end = n-1;
    int result=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==k)
        {
            result=mid;
            start=mid+1;
        }
        else if(arr[mid]<k)
        {
            start=mid+1;
        }
        else 
        {
            end=mid-1;
        }
    }
    return result;
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
    int c=lo(arr,n,k)-fo(arr,n,k)+1;
    cout<<c<<endl;
    return 0;

}