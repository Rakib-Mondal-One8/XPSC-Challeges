#include<bits/stdc++.h>
using namespace std;

int main()
{   ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;
    int freq[26] = {0};
    for(char c : s)
    {
        int idx = (c - 97);
        freq[idx]++;
    }
    for(int i=0;i<=25;i++)
    {
        // cout<<freq[i]<<endl;
        if(freq[i] == 0)
        {
            cout<<char(i+97)<<'\n';
            return 0;
        }
    }
    cout<<"None\n";
    return 0;
}