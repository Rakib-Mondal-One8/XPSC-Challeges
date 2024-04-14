#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
#define loop(i, s, n) for (int i = s; i <= n; i++)
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, b;
        cin >> n >> b;

        int And = -1;
        loop(i, 0, n - 1)
        {
            int x;
            cin >> x;
            if ((x & b) == b)
            {
                And &= x;
            }
        }
        if (And == b)
            Yes;
        else
            No;
    }
    return 0;
}