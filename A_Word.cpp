#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string s;
    cin >> s;
    int up(0),down(0);
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i])) up++;
        else down++;
    }

    if(up>down) 
    {
        for(int i=0;i<s.size();i++){
        s[i]=toupper(s[i]);
        }
    }
    else if(up<down) 
    {
        for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
        }
    }
    else 
    {
        for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
        }
    }
    cout<<s<<endl;


}