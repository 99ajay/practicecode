#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,2,2,3,4,5,6,7};
    int n=sizeof(a)/sizeof(int);
    int k;
    cin>>k;
    bool present=binary_search(a,a+n,k);
    if(present)
    {
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    auto i=lower_bound(a,a+n,k);
    cout<<"lower_bound of the array "<<(i-a)<<endl;
    auto j =upper_bound(a,a+n,k);
    cout<<"upper_bound of the array is "<<(j-a)<<endl;
    cout<<"number of occurance of the element k is "<<(j-i)<<endl;

    return 0;


}
