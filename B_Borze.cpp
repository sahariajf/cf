#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, a;
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='.')
        {
            a+='0';
        }
        else if(s[i]=='-' && s[i+1]=='.')
        {
            a+='1';
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='-')
        {
            a+='2';
            i++;
        }
    }
    cout << a<<endl;
}