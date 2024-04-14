#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n';
#define loop(i, s, n) for (int i = s; i <= n; i++)
using namespace std;
int setOrnot(int x, int k)
{
    return ((x >> k) & 1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(m + 1);
    loop(i, 0, m)
    {
        cin >> a[i];
    }
    int frnd = 0;
    loop(i, 0, m - 1)
    {
        int cnt = 0;
        loop(j, 0, n)
        {
            if (setOrnot(a[m], j) != setOrnot(a[i], j))
            {
                cnt++;
            }
        }
        if (cnt <= k)
        {
            frnd++;
        }
    }
    cout << frnd << nl;
    return 0;
}