class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>indices;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            indices.push_back({nums[i],i});
        }
        int left = 0;
        int right = nums.size()-1;
        sort(indices.begin(), indices.end());
        while(left!=right){
            if(indices[left].first + indices[right].first > target){
                right--;
            }
            else if(indices[left].first + indices[right].first < target){
                left++;
            }
            else{
                ans.push_back(indices[left].second);
                ans.push_back(indices[right].second);
                break;
            }
        }
        return ans;
    }
};