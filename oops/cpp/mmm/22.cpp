#include<iostream>
using namespace std;
void compute(char str[])
{
    int x;
    int i;
    int a[26];
    for(int i=0;i<26;i++)
    {
        a[i]=0;
    }
     i=0;
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
    cout<<a[3]<<endl;
    
}
int main()
{
  char str[]="aB3&cDEf44daxdAD";
  compute(str);//4
}