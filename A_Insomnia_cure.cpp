#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    set <int> s;
    for(int i=1 ;i<=e;i++)
    {
        if(i%a==0 || i%b==0 || i%c==0 || i%d==0)
        s.insert(i);
    }
    int len =s.size();
    cout << len << endl;
}