#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long a;
    cin>>a;
    int count =0;
    while (a!=0)
    {
        if(a%10==4 || a % 10 ==7)
        {
            count++;
        }
        a/=10;

    }

    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
}