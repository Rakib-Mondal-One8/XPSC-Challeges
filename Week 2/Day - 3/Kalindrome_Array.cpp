#include <bits/stdc++.h>
using namespace std;
const int MAX = 2e5 + 10;
vector<int> a(MAX), b(MAX);
int pos;
int n;
bool check(int x)
{
    int m = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != x)
            b[++m] = a[i];
    }
    for (int i = 1; i <= m; i++)
    {
        if (b[i] != b[m - i + 1])
        {
            if (x == 0)
            {
                pos = i;
                // cout << pos << " \n";
            }
            return false;
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {

        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        if (check(0))
        {
            cout << "YES\n";
        }
        else
        {   //cout<<pos<<"pos\n";
            bool x = check(a[pos]) || check(a[n - pos + 1]);
            if (x)
            {
                cout << "YES\n";
            }
            else
                cout << "NO\n";
        }
    }
    return 0;
}