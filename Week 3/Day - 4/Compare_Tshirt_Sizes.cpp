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
        string a, b;
        cin >> a >> b;

        int first = 0;
        int second = 0;
        int ans1 = 0, ans2 = 0;
        for (char c : a)
        {
            if (c == 'X')
            {
                first += 1;
            }
        }
        for (char c : b)
        {
            if (c == 'X')
            {
                second += 1;
            }
        }
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        if (a[0] == 'S')
            ans1 -= first;
        else if (a[0] == 'L')
            ans1 += (first + 3);
        else
            ans1 += (first + 2);
        if (b[0] == 'S')
            ans2 -= second;
        else if (b[0] == 'L')
            ans2 += (second + 3);
        else
            ans2 += (second + 2);

        if(ans1 > ans2){
            cout<<">\n";
        }
        else if(ans1 < ans2)
        {
            cout<<"<\n";
        }
        else
            cout<<"=\n";
    }
    return 0;
}