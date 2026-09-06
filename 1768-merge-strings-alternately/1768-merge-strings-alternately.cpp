class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        string result = "";
        
        // Loop while both strings have characters remaining
        while (i < word1.length() && j < word2.length()) {
            result += word1[i++]; 
            result += word2[j++]; 
        }
        
        // Append remaining characters from word1, if any
        while (i < word1.length()) {
            result += word1[i++];
        }
        
        // Append remaining characters from word2, if any
        while (j < word2.length()) {
            result += word2[j++];
        }
        
        return result;
    }
};
