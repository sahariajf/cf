#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
    }
    int t = a[0];
    int j = 0;
    while (t < n)
    {

        j++;
        j %= 7;
        t = t + a[j];
    }
    cout << j + 1 << endl;
}