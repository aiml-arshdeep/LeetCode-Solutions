class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
    // Step 1: Check if the strings can share a common divisor
        if (str1 + str2 != str2 + str1) {
            return "";
        }
        
        // Step 2: Find the GCD of their lengths
        int gcdLength = std::gcd(str1.length(), str2.length());
        
        // Step 3: Return the prefix string of that length
        return str1.substr(0, gcdLength);
    }
    
};