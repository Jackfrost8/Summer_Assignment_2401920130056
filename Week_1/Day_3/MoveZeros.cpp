class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int i=0;i<n-1;i++){
                if(nums[i]==0) swap(nums[i],nums[i+1]);
            }
        }
    }
};