#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = 0,maxi=0;;

    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (n == n-1){
            y = maxi;
            y=max;
        }
        else
        {
            max = max - x + y;
            if(max>maxi)
            {
                maxi = max;
            }
            
        }
    }
    cout << maxi << endl;
}