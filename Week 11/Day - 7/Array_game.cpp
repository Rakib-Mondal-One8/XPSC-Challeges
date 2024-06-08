#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

typedef long long ll;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pi pair<int, int>
#define pll pair<ll, ll>
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
#define nl '\n'
#define loop(i, s, n) for (ll i = s; i <= n; i++)
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using pbdms = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
/*Debug*/
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void init_code() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

}
bool isPrime(ll n) {
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;
	if (n % 2 == 0 || n % 3 == 0)
		return false;
	for (ll i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	}
	return true;
}
ll lcm(ll a, ll b) {
	return (a / __gcd(a, b)) * b;
}
int nXOR(int n) {
	if (n % 4 == 0)
		return n;
	if (n % 4 == 1)
		return 1;
	if (n % 4 == 2)
		return n + 1;
	return 0;
}
/*--------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
	int n, k;
	cin >> n >> k;
	vector<ll>a(n);
	loop(i, 0, n - 1) {
		cin >> a[i];
	}
	if (k >= 3)
	{
		cout << 0 << nl;
		return;
	}
	sort(a.begin(), a.end());
	if (k == 1) {
		ll ans = a[0];
		for (int i = 1; i < n; i++)
			ans = min(ans, a[i] - a[i - 1]);
		cout << ans << nl;
	}
	else {
		ll ans = a[1] - a[0];
		ans = a[0];
		loop(i, 0, n - 2) ans = min(ans, a[i + 1] - a[i]);
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				ll cur = abs(a[i] - a[j]);
				ll idx = lower_bound(a.begin(), a.end(), cur) - a.begin();
				if (idx >= n) {

					ans = min(ans, abs(cur - a[n - 1]));
					continue;
				}
				ans = min(ans, abs(cur - a[idx]));
				if (idx > 0) ans = min(ans, abs(cur - a[idx - 1]));
			}
		}
		cout << ans << nl;
	}

}
int main()
{
	init_code();
	fastio();
	int t;
	cin >> t;

	while (t--)
	{
		solve();
	}
	return 0;
}

