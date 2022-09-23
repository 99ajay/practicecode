#include<stdio.h>
void fun()
{
    float i=2.0;
    float j=1.0;
    float sum=0.0;
    while((i/j)>0.001)
    {
        j=j+j;
        sum=sum+i/j;
        //cout<<"sum: "<<sum<<endl;
        printf("sum: ",sum);
    }
}
int main()
{
 fun();
}