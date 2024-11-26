#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string s;
    cin >> s;
    string ans;
    
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {   
        if(s[i]=='+') continue;
        else{
            ans+=s[i];
            ans+="+";
        }
    }
    ans.pop_back();
    cout << ans << endl;    
}