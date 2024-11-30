#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int min_value=INT_MAX;
    int cnt(0);
    int flag=1;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin >> x;
        if(x==min_value){
            flag=0;
        }
        else if(x<min_value) {min_value=x;
        cnt=i;
        flag=1;
        }
    }
    if(flag==1) cout << cnt << endl;
    else
    cout << "Still Rozdil" << endl;
 
}