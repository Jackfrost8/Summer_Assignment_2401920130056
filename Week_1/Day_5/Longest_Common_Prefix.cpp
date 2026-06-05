class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int a=0;
        string ans="";

        while(true){
            bool flag=true;
            char ch;

            if(strs[0].size()>a){
                ch=strs[0][a];
            }
            else return ans;

            for(int i=1;i<strs.size();i++){
                if(a>=strs[i].size()){
                    return ans;
                }
                if(strs[i][a]!=ch) return ans;
                
            }
            a++;
            ans.push_back(ch);
        }
        
    }
};