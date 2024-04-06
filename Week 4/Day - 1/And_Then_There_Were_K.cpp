#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" <<
#define no cout << "NO" <<
#define nline '\n';
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
        int n;
        cin >> n;

        int tmp1, tmp2;
        while (n != 0)
        {
            tmp1 = n;
            tmp2 = n - 1;
            n = (tmp1 & tmp2);
        }
        cout << tmp2 << nline;
    }
    return 0;
}