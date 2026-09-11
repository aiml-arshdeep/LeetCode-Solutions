class Solution {
public:
    string reverseWords(string s) {
    // put the string into a stream tool
    stringstream ss(s);
    string word;
    string result ="";
    // suck out words one by one (this automatically ignores all extra spaces)!
    while (ss>>word){
        if (result == ""){
            result = word;//first word doesn't need a space before it
        }else {
            result = word + " "+ result;//put the new word at the front
        }
    }
    return result;
}
    
};