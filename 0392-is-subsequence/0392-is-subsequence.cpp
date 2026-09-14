class Solution {
public:
    bool isSubsequence(string s, string t) {
        int pointer_s = 0; // Tracks our progress inside string s
        int pointer_t = 0; // Scans through string t
        
        // Loop until we run out of characters in either string
        while (pointer_s < s.length() && pointer_t < t.length()) {
            // If characters match, move the pointer in string s forward
            if (s[pointer_s] == t[pointer_t]) {
                pointer_s++;
            }
            // Always move forward in string t to scan the next character
            pointer_t++;
        }
        
        // If pointer_s reached the end, it means we found the entire subsequence
        return pointer_s == s.length();
    }
};
