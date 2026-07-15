class Solution {
public:
    int search(vector<int>& nums, int target) {
        bool temp=false;
        int i;
        for (i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                temp=true;
                break;
            }
        }
        if(temp==true){
            return i;
        }
        else{
            return -1;
        }
    }
};