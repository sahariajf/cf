#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string s;
    cin >> s;
    string ans;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A' || s[i] == 'O' || s[i] == 'U' || s[i] == 'E' || s[i] == 'I' || s[i] == 'Y' || s[i] == 'a' || s[i] == 'o' || s[i] == 'u' || s[i] == 'e' || s[i] == 'i' || s[i] == 'y')
        {
            continue;
        }
        else ans+=tolower(s[i]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout <<'.'<< ans[i];
    }
    cout<<endl;

}