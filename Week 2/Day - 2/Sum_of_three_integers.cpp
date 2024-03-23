#include<bits/stdc++.h>
using namespace std;

int main()
{   ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k,s;
    cin>>k>>s;

    vector<int> a(k+1);
    for(int i=0;i<=k;i++)
    {
        a[i] = i;
    }
    int cnt = 0;
    for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++){
            int x = s-a[i]-a[j];
            if(x>=0 && x<=k){
                cnt++;
            }
        }
    }
    cout<<cnt<<'\n';
    return 0;
}