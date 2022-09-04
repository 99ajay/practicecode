#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
 int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
       std:: map<int,int> boxes;
        for (auto& v : boxTypes) {
            boxes[v[1]]+= v[0];
        }
        int result = 0;
        for (auto i = boxes.rbegin(); i != boxes.rend(); i++) {
            if (i->second <= truckSize) {
                result += i->first * i->second;
                truckSize -= i->second;
            } else {
                result += i->first * truckSize;
                break;
            }
        }
        return result;
    
    }
int main()
{
  int n;
  cin>>n;
  vector<vector<int>> bcc={{1,3},{2,2},{3,1}};
  printf("%d ",maximumUnits(&bcc,n));
  return 0;

}