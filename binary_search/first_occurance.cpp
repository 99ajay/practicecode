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
    cout<<"first occuranc eof the element is : "<<fo(arr,n,k)<<endl;
    return 0;
}