class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        vector<pair<int, int>> nonZero1;
        vector<pair<int, int>> nonZero2;
        
        // Step 1: Collect coordinates of all 1s from both images
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                if (img1[r][c] == 1) nonZero1.push_back({r, c});
                if (img2[r][c] == 1) nonZero2.push_back({r, c});
            }
        }
        
        // Map to keep track of the count of each unique shift vector
        unordered_map<int, int> shiftCounts;
        int maxOverlap = 0;
        
        // Step 2: Calculate the shift vector for every pair of 1s
        for (auto& p1 : nonZero1) {
            for (auto& p2 : nonZero2) {
                int row_shift = p2.first - p1.first;
                int col_shift = p2.second - p1.second;
                
                // Encode the 2D shift into a single unique integer key
                int shiftKey = row_shift * 100 + col_shift;
                
                // Step 3: Increment the count for this shift and track the maximum
                shiftCounts[shiftKey]++;
                maxOverlap = max(maxOverlap, shiftCounts[shiftKey]);
            }
        }
        
        return maxOverlap;
    }
};
