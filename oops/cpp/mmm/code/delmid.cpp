#include <iostream>
using namespace std;
int count(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        cnt++;
        n = n / 10;
    }
    return cnt;
}
int delmid(int x)
{
    int v = count(x);
    int sum = 0;
    int num = 1;
    int c = 0;
    int b = v / 2;
    if (v % 2 == 0)
    {
        while (x > 0)
        {

            if (c != b && (c != (b - 1)))
            {
                int rem = x % 10;
                sum = sum + (rem * num);
                num = num * 10;
            }
            c++;
            x = x / 10;
        }
    }
    else
    {
        while(x>0)
        {
        if (c != b)
        {
            int rem = x % 10;
            sum = sum + (rem * num);
            num = num * 10;
        }
        c++;
        x = x / 10;
        }
    }

    return sum;
}
int main()
{
    int x;
    cin >> x;
    // cout<<count(x)<<endl;
    cout << delmid(x) << endl;
    return 0;
}