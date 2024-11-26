#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int a[n];
    int max = 0, min = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > a[max])
        {
            max = i;
        }
        if (a[i] <= a[min])
        {
            min = i;
        }
    }

    int t = max + (n - 1 - min);
    if (max > min)
    {
        t--;
    }

    cout << t << endl;

    return 0;
}