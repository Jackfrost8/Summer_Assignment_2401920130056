class Solution {
public:
    vector<string>ans;
    bool check(string s){
        stack<char>st;
        for(auto ele:s){
            if(ele=='(')st.push(ele);
            else if(ele==')'&&st.size()>0)st.pop();
            else return false;
        }
        if(st.size()==0)return true;
        else return false;
    }
    void generate(int n,string s){
        if(n==0){
            if(check(s)){
                ans.push_back(s);
            }
            return;
        }
        s+='(';
        generate(n-1,s);
        s.pop_back();
        s+=')';
        generate(n-1,s);
    }
    vector<string> generateParenthesis(int n) {
        generate(2*n,"");
        return ans;
    }
};