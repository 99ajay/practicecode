#include<iostream>
using namespace std;
int bs(int arr[],int n,int k)
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
            end=mid-1;
        }
        else 
        {
            start=mid+1;
        }
    }
    return -1;
}
int dbs(int arr[],int n,int k)
{
    int start=0;
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
    if(arr[0]<arr[1])
    {
        cout<<"array in element is present at the position of: "<<bs(arr,n,k)<<endl;
    }
    else 
    {
        cout<<"array in element is present at the position of :"<<dbs(arr,n,k)<<endl;
    }
    //cout<<"array is present at the position of : "<<bas(arr,n,k)<<endl;
    return 0;
}