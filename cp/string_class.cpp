#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    auto i=lower_bound(arr,arr+n,arr[0]);
    auto j =upper_bound(arr,arr+n,arr[0]);
    cout<<(j-i)<<endl;
    return 0;

}