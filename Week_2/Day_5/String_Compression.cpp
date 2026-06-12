class Solution {
public:

    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0;
        int j=0;
        int ans=0;

        while(i<n){
            chars[j++]=chars[i];
            char curr=chars[i];
            int count=0;
            ans++;
            while(i<n &&chars[i]==curr){
                count++;
                i++;
            }
            string cnt = to_string(count);
            if(count==1)continue;
            for(char ch:cnt){
                chars[j++]=ch;
                ans++;
            }

        }
        
        return ans;
    }
};