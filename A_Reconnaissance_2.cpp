#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    v.push_back(v[0]); 
    int min_diff = INT_MAX; 
    int a(0),b(0);

    for (int i = 0; i < n; i++)
    {
      
        if(abs(v[i+1]-v[i])<min_diff)
        {
            min_diff = abs(v[i+1]-v[i]);
            a = i+1;
            b = i+2;
            if(b ==v.size()) b=1;

        }
    }

    cout << a << " " << b << endl; 
}