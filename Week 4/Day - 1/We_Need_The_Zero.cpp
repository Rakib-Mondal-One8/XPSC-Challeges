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

        int ans = 0;
        loop(i, 0, n - 1)
        {
            int x;
            cin >> x;
            ans ^= x; // It will be to find that answer with xor starting with zero
        }
        // AMi joi x er sathe xor korte korte zero pai then ami zero er sathe xor korte korte x o peye jabo
        if (n % 2 == 1 || ans == 0)
        {
            cout << ans << nline
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}

