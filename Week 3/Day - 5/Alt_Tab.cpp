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

    int n;
    cin >> n;

    stack<string> stk;
    map<string, bool> mp;
    loop(i, 1, n)
    {
        string s;
        cin >> s;
        stk.push(s);
        // cout << s.substr(s.size() - 2, s.size()) << nline stk.push(s);
        mp[s] = false;
    }

    string ans ="";
    while(!stk.empty()){
        if(mp[stk.top()] == false){
            string s = stk.top();
            ans += s.substr(s.size() - 2, s.size());
            mp[stk.top()] = true;
            stk.pop();
        }
        else stk.pop();
    }
    cout<<ans<<nline
    return 0;
}