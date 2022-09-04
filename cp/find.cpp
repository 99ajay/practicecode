#include<iostream>
using namespace std;
int main()
{
     string s;
     cin>>s;
     int ans=0;
     int x=0;
     bool flag=true;
     for(int i=0;i<s.size();i++)
     {
        if(s[i]>='a' && s[i]<='z')
        {
           x=x+((s[i]-'a')+1);
           flag=false;

        }
        if(s[i]>='A' && s[i]<='Z')
        {
            x=x+((s[i]-'A')+1);
        }
        if(s[i]==' ')
        {  
            if(flag)
            {
               
                ans=ans+(2*x);
            }
            else{
                 ans=ans+x;
            }

            x=0;
            flag=true;
        }
     }
     cout<<ans<<endl;

}