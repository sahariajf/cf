#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    int min = 10001, max = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(i==0)
        {
            min=x;
        max=x;
        }
        else if (x < min)
        {
            min = x;
            cnt++;
        }
        else if (x > max)
        {
            max = x;
            cnt++;
        }
    }
    cout << cnt << endl;
}