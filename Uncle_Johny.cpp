#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
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
      int c=arr[k-1];
      sort(arr,arr+n);
      auto it=lower_bound(arr,arr+n,c);
      cout<<(it-arr)+1<<endl;
  }
  return 0;
}