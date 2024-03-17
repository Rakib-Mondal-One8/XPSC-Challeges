<<<<<<< HEAD
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
=======
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
>>>>>>> 773d7c0d95d0bd2b547f74fc626ae4348cae2b02
}