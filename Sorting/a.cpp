 #include<iostream>
 using namespace std;
 string shiftString(string str, int shiftCount) {

        string result;

        result = str.substr(str.length() - shiftCount, str.length()) + str.substr(0, str.length() - shiftCount);

        return result;

    }
 int solution(char *s,int m,int n)
 {
    int count=0;
    int size = sizeof(s) /sizeof(s[0]);
    string t="";
    for(int i=0;i<=size+1;i++)
    {
        t.push_back(s[i]);

    }
    //cout<<t<<endl;
    string afterCuts=t;
     while (true) {

            count++;

            if (shiftString(afterCuts,m +n)==(t)) {

             count++;

                break;

            }

            else if (shiftString(afterCuts,m)==(t)) {

                break;

            } else if (shiftString(afterCuts, m)==(t)) {

                break;

            }

            afterCuts = shiftString(afterCuts, m +n);

            count++;

        }
        return count;
 }
 int main()
 {
   char arr[]="AbcDef";
   cout<<solution(arr,1,2)<<endl;
 }