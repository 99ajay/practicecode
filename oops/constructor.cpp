#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int n;
	cin>>n;
	int v=n;
	int arr[2001]={0};
    map<int ,int>m;
	while(n--)
	{    int a,b,c;
		cin>>a>>b>>c;
		for(int i=a;i<=b;i++)
		{
			  arr[arr[i]]++;
		}
	}   int d=0;
		  for(int i=0;i<=2001;i++)
          {
              if(arr[i]==v)
              {
                  d++;
              }
          }
          cout<<d<<endl;
	
	return 0;
}