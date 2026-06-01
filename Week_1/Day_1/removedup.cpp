class Solution {
public:
    int removeDuplicates(vector<int>& nums) { 
        int n=nums.size();
        vector<int> ans(n);
        int a=0;
        bool flag=false;
        if(n>=1){
            ans[a]=nums[0];
            flag=true;
        }
        for(int i=1;i<n;i++){
            if(nums[i]!=ans[a]){
                a++;
                ans[a]=nums[i];
            }
        }
        nums=ans;
        if(flag==true) return a+1;
        return a;
    }
};