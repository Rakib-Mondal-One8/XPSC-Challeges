/*
vector<long long> printFirstNegativeInteger(long long int a[],long long int n, long long int k) {
    queue<pair<long,long>>q;
    vector<long long> v;
    long long l=0,r=0;
    while(r<n){
        if(a[r] < 0)
        {
            q.push({a[r],r});
        }
        if((r-l+1) == k)
        {
            if(q.empty())
            {
                v.push_back(0);
            }
            else
            {
                while(!q.empty() && q.front().second < l)
                {
                    q.pop();
                }
                if(!q.empty())
                    v.push_back(q.front().first);
                else
                    v.push_back(0);
            }
            l++;
            r++;



        }
        else
        {
            r++;
        }

    }
    return v;
 }
*/