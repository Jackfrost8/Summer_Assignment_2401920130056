class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>temp;
        //insert into an hashmap
        //for(int i=0;i<nums.size();i++) temp[i]=nums[i];
        //check if there is an target-nums[i]
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int j;
            int findd=target-nums[i];
            if(temp.find(findd)!=temp.end()){
                ans.push_back(temp[findd]);
                ans.push_back(i);
                return ans;
            }
            else{
                temp[nums[i]]=i;
            }
        }
        return ans;
    }
};