#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int mark(int arr[][10],int n)
{
 map<int,int>m;
 for(int i=0;i<10;i++)
 {
    int min=INT_MAX;
    int b=0;
    for(int j=0;j<n;j++)
    {
       if(arr[j][i]<min)
       {
          min=arr[j][i];
          b=j;

       }
    }
    m[b]++;
   //cout<<min<<" ";
 }
 int count=0;
 for(auto x : m)
 {
   // cout<<x.first<<" "<<x.second<<endl;
    if(x.second>=2)
    {
        count++;
    }
 }
 return count;
}
int main()
{
    int x[][10]={{50,51,67,73,55,71,35,90,61,76},{8,23,47,49,56,38,12,65,17,45},{22,34,83,39,34,82,33,45,92,41}};
    cout<<mark(x,3)<<endl;
   // mark(x,3);
    
}