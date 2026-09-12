class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        //initialize an answer vector of size n filled with 1s
        vector<int> answer(n, 1);
        // setp 1: calculate the prefix (left) products
        int leftProduct = 1;
        for (int i = 0; i<n; i++){
            answer[i] = leftProduct;
            leftProduct *= nums[i];//update the running product of the left side
        }
        // step 2: calculate the suffix (right) products on the fly while going backwards
        int rightProduct = 1;
        for(int i=n-1; i>=0; i--){
            answer[i]*=rightProduct;//multiply the right side product into our answer
            rightProduct *= nums[i];// update the running product of right side
        }
        return answer;

    }
};