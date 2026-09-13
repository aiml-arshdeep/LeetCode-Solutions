class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;    // Pointer to scan the original array
        int res = 0;  // Pointer to write the compressed result
        
        while (i < chars.size()) {
            int groupLength = 1;
            
            // Count how many times the current character repeats consecutively
            while (i + groupLength < chars.size() && chars[i + groupLength] == chars[i]) {
                groupLength++;
            }
            
            // Step 1: Always write the character itself
            chars[res++] = chars[i];
            
            // Step 2: If it repeats, write the count next to it
            if (groupLength > 1) {
                // to_string handles counts greater than 9 by breaking them into individual digits (e.g., 12 -> '1', '2')
                for (char c : to_string(groupLength)) {
                    chars[res++] = c;
                }
            }
            
            // Move the scanner pointer past the processed group
            i += groupLength;
        }
        
        // The write pointer naturally holds the new length of the compressed array
        return res;
    }
};
