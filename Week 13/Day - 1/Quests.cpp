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
const int MAX = 2 * 1e5 + 5;
void solve()
{
	ll n, c, d;
	cin >> n >> c >> d;
	vector<ll>a(n), pref(n);
	ll mx = LLONG_MIN;
	loop(i, 0, n - 1) {
		cin >> a[i];
		mx = max(mx, a[i]);
	}
	sort(a.rbegin(), a.rend());
	pref[0] = a[0];
	loop(i, 1, n - 1) pref[i] = pref[i - 1] + a[i];
	debug(pref);
	ll mn = min(d, n);
	if (mx >= c || (pref[mn - 1] >= c)) {
		cout << "Infinity\n";
		return;
	}
	bool ok = false;
	ll ans = LLONG_MIN;
	loop(k, 0, d - 1) {
		ll coin = 0;
		debug(k);
		for (int i = 1; i <= d; i += (k + 1)) {
			coin += pref[0];
			debug(coin);
			int next = i + (k + 1);
			if (next <= d) {
				ll gaps = (next - i - 1);
				gaps = min(gaps, n - 1);
				coin += (pref[gaps] - pref[0]);
			}
			else {
				ll gaps = d - i;
				gaps = min(gaps, n - 1);
				coin += (pref[gaps] - pref[0]);
				break;
			}
			debug(coin);
			debug(i);
		}
		if (coin >= c) {
			debug(coin);
			ok = true;
			ans = max(ans, k);
		}
	}
	(ok) ? cout << ans << '\n' : cout << "Impossible\n";
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

