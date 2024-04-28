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

    int n, a, b;
    cin >> n >> a >> b;

    int l = 1, r = min(a, b);
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (((a / mid) + (b / mid)) < n)
            r = mid - 1;
        else
            l = mid + 1;
    }
    cout << r << nl;
    return 0;
}