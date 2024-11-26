#include <bits/stdc++.h>
using namespace std;

int main ()
{
    set<char> set;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        set.insert(s[i]);
    }
    if(set.size()%2==0)
    cout<<"CHAT WITH HER!"<<endl;
    else
    cout<<"IGNORE HIM!"<<endl;
}