#include<iostream>
using namespace std;
string frequency(string input1)
{
  string s;
  int count[26]={0};
	for(int i=0;i<input1.length();i++)
	{
		count[input1[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		if(count[i]>0)
		{
			s.push_back(char(i+'a'));
		
			s.push_back(count[i]+'0');
		}
	}
	return s;
	throw "Function frequency(string input1) not implemented. ";
}
int main()
{
	string str;
	cin>>str;
	cout<<frequency(str);
	 
	return 0;
}