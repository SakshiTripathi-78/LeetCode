class Solution {
public:
    int maxArea(vector<int>& height) {
        // 2-pointer approach!
        int left=0,right=height.size()-1;
        int maximum=INT_MIN;
        while(left<right){
            int temp=min(height[left],height[right])*(right-left);
            maximum=max(temp,maximum);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maximum;
    }
};