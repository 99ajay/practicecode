#include<iostream>
using namespace std;
void p(int arr[],int n,int h)
{
    int pivot=h;
    int i=-1;
    for(int j=0;j<=n-1;j++)
    {
        if(arr[j]>pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
 int arr[]={12,34,12,8,56,67,89,100};
 p(arr,8,34);
}