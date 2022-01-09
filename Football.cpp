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
        int arr1[n];
        //vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
         for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        int max=0;
        for(int i=0;i<n;i++)
        {
            int c=arr[i]*20-arr1[i]*10;
            if(c<0)
            {
                c=0;
            }
           if(c>max)
           {
               max=c;
           }
        }
        cout<<max<<endl;
    
    }
    return 0;
}