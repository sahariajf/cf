#include <iostream>
using namespace std;

int main()
{
    int n, a, index[100001];
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a;
        index[a] = i; // store the index of each number (vice versa)
    }

    int m, b;
    cin >> m;
    long long Vasya = 0, Petya = 0;
    while (m--)
    {
        cin >> b;
        Vasya += index[b];
        Petya += (n + 1 - index[b]);
    }
    cout << Vasya << " " << Petya << endl;
    return 0;
}