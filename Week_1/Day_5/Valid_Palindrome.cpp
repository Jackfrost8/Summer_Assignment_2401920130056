class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++){
            if((s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57)) ans.push_back(s[i]);
            else if(s[i]>=65 && s[i]<=90){
                char ch=s[i]+32;
                ans.push_back(ch);
            }
        }
        //cout<<ans;
        int i=0;
        int j=ans.size()-1;
        while(i<j){
            if(ans[i]!=ans[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};