#include<iostream>
using namespace std;
void fun()
{
    float i=2.0;
    float j=1.0;
    float sum=0.0;
    while((i/j)>0.001)
    {
        j=j+j;
        sum=sum+i/j;
        cout<<"sum: "<<sum<<endl;
    }
}
int main()
{
 fun();
}
// sum: 1
// sum: 1.5
// sum: 1.75
// sum: 1.875
// sum: 1.9375
// sum: 1.96875
// sum: 1.98438
// sum: 1.99219
// sum: 1.99609
// sum: 1.99805
// sum: 1.99902