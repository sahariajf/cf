#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt(0);
    for (int i = 0; i < s.size()-1; i++)
    {
        if (cnt > 6)
        {
            cout << "YES" ;
            break;
        }
        if (s[i] == s[i+1])
            cnt++;
        else
            cnt = 1;
    }
    if (cnt <= 6) cout << "NO" ;
}