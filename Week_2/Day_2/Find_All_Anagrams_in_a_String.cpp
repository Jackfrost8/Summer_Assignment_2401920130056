class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(), m = p.size();
        vector<int> res;
        unordered_map<char, int> mp, ms;
        if(m > n) return res;

        for(int i=0; i<m; i++){
            mp[p[i]]++;
            ms[s[i]]++;
        }
        int low = 0, high = m-1;
        while(high < n){
            if(ms == mp){
                res.push_back(low);
            }
            high++;
            if(high < n){
                ms[s[high]]++;
                ms[s[low]]--;
                if(ms[s[low]] == 0){    
                    ms.erase(s[low]);
                }
                low++;
            }
        }

        return res;
    }
};