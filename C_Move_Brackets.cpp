#include<iostream>
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
        cin>>s;int totel=0,x=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
               x++;
            }
            if(s[i]==')')
            {
                x--;
            }
            if(x<0)
            {
                x=0;totel++;
            }
        }
        cout<<totel<<endl;
    }
    return 0;
}