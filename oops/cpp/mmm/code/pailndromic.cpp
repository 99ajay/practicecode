/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int isPailndromic(char inputstr[],int length)
{
    int l=0;
    int h=length-1;
    while(l<h)
    {
        if(inputstr[l]!=inputstr[h])
        {
            return 0;
        }
        l++;
        h--;
    }
    return 1;
}

int main()
{
    int length;
    cin>>length;
    char inputstr[length];
    cin>>inputstr;
    cout<<isPailndromic(inputstr,length);
    return 0;
}
    
