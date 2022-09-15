#include<iostream>
#include<vector>

using namespace std;
int solution (int n,int arr[],int x)
{
    int v=(n/x);
   
    int rows=x;
    int cols=v;
     int array[rows][cols];
     vector<int>z;
   
   int i=0;
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
              array[row][col] = arr[i];
                i++;
        }
    }
     for (int col = 0; col < rows; col++)
    {
        int sum=0;
        for (int row = 0; row< cols; row++)
        {
              sum=sum+array[col][row];
        }
        z.push_back(sum);
    }
    for(int i=0;i<z.size();i++)
    {
        cout<<z[i]<<" ";
    }
    int max=0;
    int c=0;
    for(int i=0;i<z.size();i++)
    {
      if(max<z[i])
      {
        max=z[i];
        c=i;
      }
    }
    return c+1;

    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<solution(n,arr,x)<<endl;
    
    }
