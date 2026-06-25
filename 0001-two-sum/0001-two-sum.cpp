class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        vector<pair<int,int>>indexes;
        for(int i=0;i<nums.size();i++){
            indexes.push_back({nums[i],i});
        }
        sort(indexes.begin(),indexes.end());
        while (left != right) {
            if (indexes[left].first + indexes[right].first > target) {
                right--;
            } else if (indexes[left].first + indexes[right].first < target) {
                left++;
            } else {
                return {indexes[left].second,indexes[right].second};
            }
        }
        return {};
    }
};