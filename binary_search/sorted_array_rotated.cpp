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
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<ar(arr,n)<<endl;
    return 0;

}
