#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int cnt(0);
    for(int i=1;i<=n;i++)
    {
        int g;
        cin >> g;
        cnt+=g;
    }
    int ans(0);
    for(int i=1;i<=5;i++)
    {
        if((cnt+i)%(n+1)==1) ans++;
    
    }
    cout << 5-ans<<endl;
}