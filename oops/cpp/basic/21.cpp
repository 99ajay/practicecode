#include<iostream>
using namespace std;
int enigma(int a[],int start,int end)
{
    if(start>end)
    {
        return -1;
    }
    else if(start==end)
    {
        return a[start];
    }
    else{
        return a[start]>enigma(a,start+1,end)?a[start]:enigma(a,start+1,end);
    }
}
int main()
{ 
    int arr[]={5,8,2,9,10,1,14,7,6,12,0,3};
    cout<<enigma(arr,4,11)<<endl;
}

//output:---14;