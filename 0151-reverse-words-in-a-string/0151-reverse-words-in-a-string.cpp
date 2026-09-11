class Solution {
public:
    string reverseWords(string s) {
        // 1. Reverse the entire string first
        reverse(s.begin(), s.end());
        
        int n = s.length();
        int write_ptr = 0;  // Keeps track of where we are writing clean characters
        int i = 0;          // Scans through the original string
        
        while (i < n) {
            // Skip leading spaces to find the start of a word
            while (i < n && s[i] == ' ') i++;
            
            if (i == n) break; // If we reached the end, stop
            
            // Add a single space between words (but not before the first word)
            if (write_ptr > 0) {
                s[write_ptr++] = ' ';
            }
            
            // Record where the current word starts in our clean text
            int word_start = write_ptr;
            
            // Copy the word character by character
            while (i < n && s[i] != ' ') {
                s[write_ptr++] = s[i++];
            }
            
            // Reverse only this specific word back to its original order
            reverse(s.begin() + word_start, s.begin() + write_ptr);
        }
        
        // Chop off any remaining trailing characters/spaces at the end
        s.resize(write_ptr);
        return s;
    }
};
