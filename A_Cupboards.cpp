#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int lz(0),rz(0),ans(0);
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;
        if(x==0) lz++;
        if (y==0) rz++;
    }
    
    if (lz==rz && rz==n)
    ans=0;

    else if(lz>=rz)
    {
        ans=abs((n-lz)+rz);
    }
    else{
        ans=abs((n-rz)+lz);
    }
    cout<<ans<<endl;
    
}