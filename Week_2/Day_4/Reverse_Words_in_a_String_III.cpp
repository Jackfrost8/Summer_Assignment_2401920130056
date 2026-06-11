class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int i=0;
        int j=0;
        int idx;
        while(i<n && j<=n){
            char ch=s[j];
            if(ch==' '|| j==n){
                reverse(s.begin()+i,s.begin()+j);
                idx=i;
                i=j+1;
                j+=1;
            }
            else j++;
        }
        return s;
    }
};