class Solution {
public:
    bool isVowel(char c) {
    c = tolower(c); // converts to lowercase so we don't have to check A, E, I, O, U separately
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

    string reverseVowels(string s) {
        int left = 0;
        int right = s.length() -1;
        while (left<right) {
            //find the next vowel from the left
            while(left<right && !isVowel(s[left])){
                left++;
            }
            //find the next vowel from right
            while(left<right && !isVowel(s[right])){
                right--;
            }
            swap(s[left], s[right]);
            // move the pointers inward to continue scanning
            left++;
            right--;
        }
        return s;
    }
};