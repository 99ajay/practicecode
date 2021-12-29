#include<bits/stdc++.h>
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
     string s;
     cin>>s;
     sort(s.begin(),s.end());
     //cout<<s<<endl;
     int n1=0,m1=0;
     for(int i=0;i<s.size();i++)
     {
         if(i%2==0)
         {
             n1=n1*10+(s[i]-'0');
         }
         else
         {
             m1=m1*10+(s[i]-'0');
         }
     }
     cout<<abs(n1-m1)<<" ";
    }
     return 0;
}