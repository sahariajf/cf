#include <bits/stdc++.h>
using namespace std;

int main ()
{
    set <int> s;
    for(int i=0;i<4;i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    int ans = 4-s.size();
    cout << ans << endl;
}