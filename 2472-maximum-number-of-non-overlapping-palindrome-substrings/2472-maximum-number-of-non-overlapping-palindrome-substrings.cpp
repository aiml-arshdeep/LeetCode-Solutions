class Solution {
public:
    int maxPalindromes(string s, int k) {
        int n = s.length();
        // dp[i] stores the maximum number of non-overlapping palindromes in s[0...i-1]
        vector<int> dp(n + 1, 0);
        
        for (int i = 0; i < n; i++) {
            // Carry forward the best result found so far
            dp[i + 1] = max(dp[i + 1], dp[i]);
            
            // Case 1: Check for Odd-length palindromes centered at index i
            int l = i, r = i;
            while (l >= 0 && r < n && s[l] == s[r]) {
                if (r - l + 1 >= k) {
                    dp[r + 1] = max(dp[r + 1], dp[l] + 1);
                    break; // Greedy choice: take the shortest valid palindrome
                }
                l--; r++;
            }
            
            // Case 2: Check for Even-length palindromes centered between i and i+1
            l = i; r = i + 1;
            while (l >= 0 && r < n && s[l] == s[r]) {
                if (r - l + 1 >= k) {
                    dp[r + 1] = max(dp[r + 1], dp[l] + 1);
                    break; // Greedy choice: take the shortest valid palindrome
                }
                l--; r++;
            }
        }
        
        return dp[n];
    }
};
