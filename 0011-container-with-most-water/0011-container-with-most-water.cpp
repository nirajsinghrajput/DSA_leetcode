class Solution {
public:
    int maxArea(vector<int>& height) {
        int mostWater = 0;

        int left = 0;
        int right = height.size()-1;
        while(left < right) {
            int currWater = min(height[left], height[right]) * (right - left);
            mostWater = max(mostWater, currWater);
            if(height[left] > height[right]){
                right --;
            }
            else{
                left++;
            }
        }
        return mostWater;
    }
};