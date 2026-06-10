class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        int i=0;
        while(i<n){
            int idx=i;
            if(haystack[i]==needle[0] && (i+m)<=n && haystack[i+m-1]==needle[m-1]){
                bool flag=true;
                int j=0;
                int ridx=0;
                while(j<m){
                    if(haystack[i]!=needle[j]){
                        flag=false;
                        break;
                    }
                    else{
                        ridx++;
                        i++;
                        j++;
                    }
                }
                if(flag==true) return idx;
                else{
                    i-=ridx;
                }
            }
            i++;
        }
        return -1;
    }
};