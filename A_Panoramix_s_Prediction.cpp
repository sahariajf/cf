#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if (n <= 1)
        return false; // Handle edge cases
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    // Generate all primes up to 50
    vector<int> primes;
    for (int i = 2; i <= 50; i++)
    {
        if (isprime(i))
            primes.push_back(i);
    }
    int cnt=0;
    // Check if m is the next prime after n
    for (int i = 0; i < primes.size(); i++)
    {
        if (primes[i] == n && primes[i + 1] == m)
        {
            cnt=1;
            break;
        }
        else
        {
            cnt=0;
        }
    }
    if(cnt==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    return 0;
}
