class Solution {
public:
    int findGCD(vector<int>& nums) {
        int small = *std::min_element(nums.begin(), nums.end());
        int large = *std::max_element(nums.begin(), nums.end());
        return std::gcd(small, large);
    }
};