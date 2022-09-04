#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        vector<int>v;
        vector<int>s;
        if(k%2==0)
        {   
            v.push_back(1);
            for(int i=2;i<=(k/2);i=i+2)
            {
                v.push_back(i);
            }
        }

        if(k%2!=0)
        {
            s.push_back(1);
            for(int i=3;i<=(k/2)+1;i+2)
            {
               s.push_back(i);
            }
        }
    }
}