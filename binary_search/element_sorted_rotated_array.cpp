#include<iostream>
using namespace std;

int ar(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        int next=(mid+1)%n;
        int prev=(mid+n-1)%n;
        if(arr[mid]<=arr[next] && arr[mid]<=arr[prev])
        {
            return mid;
        }
        else if(arr[start]<=arr[mid])
        {
            start=mid+1;
        }
        else if(arr[mid]<=arr[end])
        {
            end=mid-1;
        }
    }
}
int bs(int arr[],int k,int start,int end)
{
     
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(arr[mid]<k)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }

    }
    return -1;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int index=ar(arr,n);
    int ans1=bs(arr,k,0,index-1);
    int ans2=bs(arr,k,index,n-1);
    if(ans1>0)
    {
        cout<<ans1<<endl;
    }
    else if(ans2>0)
    {
        cout<<ans2<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
     
}
