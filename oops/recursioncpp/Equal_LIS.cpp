#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        vector<int>v,y;
         if(k==2)
        {
            cout<<"NO"<<endl;
        }
        else if(k%2==0 && k>2)
        {
          for(int i=(k/2)+1;i<=k;i++)
           {
               y.push_back(i);
           }
           y.push_back(1);
           //y.push_back(k);

           for(int i=(k/2);i>=(2);i--)
           {
               y.push_back(i);
           }
           cout<<"YES"<<endl;
           for(int i=0;i<k;i++)
           {
               cout<<y[i]<<" ";
           }
           cout<<endl;
        }
        else
        {
           for(int i=0;i<k/2;i++)
           {
               v.push_back(i+1);
           }
           v.push_back(k);
           for(int i=k-2;i>=(k/2);i--)
           {
               v.push_back(i+1);
           }
           cout<<"YES"<<endl;
           for(int i=0;i<k;i++)
           {
               cout<<v[i]<<" ";
           }
        }

    }
    return 0;
}