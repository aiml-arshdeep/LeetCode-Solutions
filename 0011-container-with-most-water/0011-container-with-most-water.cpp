class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max_water = 0;
        
        while (left < right) {
            // Calculate current width and limiting height
            int current_width = right - left;
            int current_height = min(height[left], height[right]);
            
            // Compute current area and update our maximum record
            int current_area = current_width * current_height;
            max_water = max(max_water, current_area);
            
            // Move the pointer pointing to the shorter line to look for a taller line
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        return max_water;
    }
};
