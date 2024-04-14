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
        int n;
        cin >> n;

        int a = 0;
        int b = 0;
        bool flag = false;
        loop(i, 1, n)
        {
            if ((n % i) == 0)
            {
                a = (n/i);
                b = (a^i);

                if(((a^b) * (a|b)) == n)
                    break;
            }
        }
        cout << a << " " << b << nl;
    }
    return 0;
}