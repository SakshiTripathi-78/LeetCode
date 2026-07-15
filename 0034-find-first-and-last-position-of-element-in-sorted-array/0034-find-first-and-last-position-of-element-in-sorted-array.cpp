class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int count=0;
        vector<int>ans;
        vector<int>temp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                count++;
                ans.push_back(i);
            }
        }
        if(count==0){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        else if(count==1){
            ans.push_back(ans[0]);
            return ans;
        }
        else{
            temp.push_back(ans[0]);
            temp.push_back(ans[count-1]);
            return temp;
        }
    }
};