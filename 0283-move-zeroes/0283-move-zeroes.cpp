class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int write_ptr = 0;//tracks where the next non-zero number should go
        //scan the entire array
        for(int i=0; i<nums.size(); i++){
            //when we find a non-zero element..
            if (nums[i]!=0){
                //swap it with the element at the write pointer
                swap(nums[write_ptr], nums[i]);
                //move the write pointer forward to prepare for the next non-zero
                write_ptr++;
            }
        }
    }
};