#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
        }
    int q;
    cin >> q;
    int ans1(0),ans2(0);
    for (int i = 0; i < q; i++)
    {
        int p;
        cin >> p;
        int cnt(0);
        for(int j=0;j<n;j++)
        {
            if (a[j] == p)
            cnt=j+1;
        }
        ans1+=cnt;
        ans2+=n-cnt+1;  
    }
    cout << ans1 << " " << ans2 << endl;
}
