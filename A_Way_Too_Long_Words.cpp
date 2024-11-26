#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int p;
    cin >> p;
    while (p--)
    {
        string s,ans;
    cin >> s;
    int n = s.size();
    if(n>10)
    {
        ans+=s[0];
        ans+=to_string(n-2);
        ans+=s[n-1];
    }
    else
    ans=s;
    cout << ans << endl;
    }
    
    
    
}