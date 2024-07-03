#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
/*Problem Link -> https://codeforces.com/problemset/problem/1989/D*/
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
using namespace chrono;
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds;
template <typename T>
using pbdms = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
/*Debug*/
#ifdef Rakib_18
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
void _print(pbds v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void init_code() {
#ifdef Rakib_18
	freopen("Error.txt", "w", stderr);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
bool isPrime(ll n) {if (n <= 1)return false; if (n <= 3)return true; if (n % 2 == 0 || n % 3 == 0)return false; for (ll i = 5; i * i <= n; i += 6) {if (n % i == 0 || n % (i + 2) == 0)return false;} return true;}
ll lcm(ll a, ll b) {return (a / __gcd(a, b)) * b;}
int nXOR(int n) {if (n % 4 == 0)return n; if (n % 4 == 1)return 1; if (n % 4 == 2)return n + 1; return 0;}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
const int N = 1e6 + 9;
int n, m;
int a[N];
int b[N];
int c[N];
vector<pi>v;
map<ll, ll>mp;
ll dp(ll cur) {
	if (mp.count(cur)) return mp[cur];
	int l = 0, r = v.size() - 1;
	int idx = -1;
	while (l <= r) {
		int mid = l + (r - l) / 2;
		if (v[mid].second <= cur) {
			idx = mid;
			r = mid - 1;
		}
		else
			l = mid + 1;
	}
	if (idx == -1)
		return mp[cur] = 0;
	ll dec = v[idx].first;
	ll inv = v[idx].second;
	ll get = (cur - inv) / dec + 1;
	ll lft = cur - get * dec;
	ll res = get * 2 + dp(lft);
	return mp[cur] = res;
}
void solve()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		v.push_back({a[i] - b[i], a[i]});
	}
	for (int i = 0; i < m; i++) {
		cin >> c[i];
	}
	sort(v.begin(), v.end());
	debug(v);
	vector<pi>tmp;
	for (int i = 0; i < n; i++) {
		if (tmp.empty()) {
			tmp.push_back(v[i]);
			continue;
		}
		if (tmp.back().second > v[i].second) {
			tmp.push_back(v[i]);
		}
	}
	v = tmp;
	debug(v);
	ll ans = 0;
	for (int i = 0; i < m; i++) {
		ans += dp(c[i]);
	}
	cout << ans << nl;
}
int main()
{
	init_code();
	fastio();
	int t = 1;
	// cin >> t;
	auto start1 = high_resolution_clock::now();
	while (t--)
	{
		solve();
	}
	auto stop1 = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop1 - start1);
#ifdef Rakib_18
	cerr << "Time: " << duration . count() / 1000 << " ms" << endl;
#endif
	return 0;
}