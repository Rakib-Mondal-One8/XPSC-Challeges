#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int i = 0;

    while (true)
    {
        if (c * i > 1000)
        {
            break;
        }
        if (c * i >= a && c * i <= b)
        {
            cout << c * i;
            return 0;
        }
        i++;
    }
    cout << "-1\n";
    return 0;
}