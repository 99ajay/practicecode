#include<iostream>
using namespace std;
int bs(int arr[],int n,int k)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(k==arr[mid])
        {
            return mid;
        }
        else if(k<arr[mid])
        {
            end=end-1;
        }
        else 
        {
            start=mid+1;
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
    cout<<"element are at the position : "<<bs(arr,n,k)<<endl;
    return 0;
}