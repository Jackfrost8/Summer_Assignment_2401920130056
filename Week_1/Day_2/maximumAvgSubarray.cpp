class Solution {
public:

    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        int n=nums.size();
        int i;
        for(i=0;i<k;i++){
            sum+=nums[i];
        }
        double maxans=ans;
        for(;i<n;i++){
            sum-=nums[i-k];
            sum+=nums[i];
            if(sum>maxans) maxans=ans;
            
        }
        return maxans/k;
    }
};