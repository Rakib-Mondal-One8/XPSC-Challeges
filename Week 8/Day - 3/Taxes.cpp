#include <bits/stdc++.h>
typedef long long ll;
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n'
#define loop(i, s, n) for (ll i = s; i <= n; i++)
using namespace std;
bool is_prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // Because every natural numbers is a sum of 2 prime numbers
    if (is_prime(n))
        cout << 1 << nl;
    else if (n % 2 == 0)
        cout << 2 << nl;
    else if (is_prime(n - 2))
        cout << 2 << nl;
    else
        cout << 3 << nl;
    return 0;
}