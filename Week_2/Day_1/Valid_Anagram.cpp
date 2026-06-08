class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>a1;
        unordered_map<char,int>a2;
        int n=s.size();
        int m=t.size();
        if(n!=m)return false;
        for(int i=0;i<n;i++){
            char ch=s[i];
            char c=t[i];
            a1[ch]++;
            a2[c]++;
        }
        for(auto a:s){
            if(a1[a]!=a2[a])return false;
        }
        return true;
    }
};