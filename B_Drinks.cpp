#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    float ans=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >>a;
        ans+=a;
        
    }
    ans=ans/n;
    cout<<ans<<endl;
    
}