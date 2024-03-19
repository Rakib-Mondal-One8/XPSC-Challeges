/*
class Solution{
public:
    bool is_zero(vector<int>&cnt)
    {
        for(int i : cnt)
        {
            if(i !=0)
                return false;
        }
        return true;
    }
    int search(string pat, string txt) {
        int n = pat.size();
        int m = txt.size();
        int ans = 0;

        vector<int>cnt(26,0);
        for(char c:pat)
        {
            cnt[c-'a']++;
        }
        int l=0;
        int r=0;
        while(r<m)
        {
            cnt[txt[r]-'a']--;
            if(r-l+1 == n)
            {
                if(is_zero(cnt)){
                    ans++;
                }
                cnt[txt[l]-'a']++;
                l++;
            }
            r++;

        }

        return ans;
    }

};
*/