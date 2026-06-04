class Solution {
public:
    int maxArea(vector<int>& arr) {
        int i=0;
        int j=arr.size()-1;
        int maxarea=INT_MIN;
        while(i<j){
            int ht=j-i;
            int bth=min(arr[i],arr[j]);
            maxarea=max(maxarea,(ht*bth));
            if(arr[i]>arr[j])j--;
            else i++;
        }
        return maxarea;
    }
};