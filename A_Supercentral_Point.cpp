#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int l = 0, r = 0, u = 0, d = 0;
        
        for (int j = 0; j < n; j++)
        {
            if (a[j] < a[i] && b[j] == b[i]) l = 1;
            if (a[j] > a[i] && b[j] == b[i]) r = 1;
            if (a[j] == a[i] && b[j] > b[i]) u = 1;
            if (a[j] == a[i] && b[j] < b[i]) d = 1;
        }
        
        if (l && r && u && d) ans++;
    }
    
    cout << ans << endl;
}