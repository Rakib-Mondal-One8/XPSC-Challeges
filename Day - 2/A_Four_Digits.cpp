#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string ans;
    for (int i = 1; i <= 4 - s.size(); i++)
    {
        ans+='0';
    }
    ans+=s;
    cout<<ans<<'\n';
    return 0;
}