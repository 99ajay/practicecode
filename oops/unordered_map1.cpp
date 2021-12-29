#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main()
{
    unordered_map<string ,int >ourmap;
    //insert
    pair<string,int>p("abc",1);
    ourmap.insert(p);
    ourmap["def"]=2;
    //find or accessing the element
    cout<<ourmap["abc"]<<endl;
    //one more way to access 
    cout<<ourmap.at("abc")<<endl;
    //check presence
    if(ourmap.count("gfi") >0)
    {
        cout<<" ghi is present "<<endl;
    }
    return 0;

}