#include <bits/stdc++.h>
using namespace std;

int min(int x,int y,int z){
    if(x<y && x<z)
    return x;
    else if(y<x && y<z)
    return y;
    return z;
}
int main ()
{
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p>>nl>>np;
    int ak=(k*l)/nl;
    int ac=(c*d);
    int salt =p/np;
    int ans = min(ak,ac,salt)/n;
    cout << ans << endl;

}