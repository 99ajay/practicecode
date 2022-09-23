#include<iostream>
using namespace std;
#define MAX_CHARS 100
char max(char str[])
{
    int a[26];
    for(int i=0;i<26;i++)
    {
        a[i]=0;
    }
    int x,i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            x=str[i]-'a';
        }
         if(str[i]>='A' && str[i]<='Z')
        {
            x=str[i]-'A';
        }
        a[x]=a[x]+1;
        i=i+1;
    }
    int y=0;
    int max=0;
    for(int i=0;i<26;i++)
    {
        //cout<<a[i]<<" ";
      if(max<a[i])
      {
        y=i;
        max=a[i];
      }
    }
   return char('A'+y);
}
int main()
{
   char str[MAX_CHARS];
   cin.getline(str,100);
  //cin>>str;
   //cout<<max(str)<<endl;
  cout<<max(str)<<endl;
   return 0;
}