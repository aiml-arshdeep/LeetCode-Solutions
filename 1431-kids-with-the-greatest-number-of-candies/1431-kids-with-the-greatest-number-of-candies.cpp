class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        //steo 1: find the current mnaximum candies any kid has
        int maxCandies = *std::max_element(candies.begin(), candies.end());
        //step 2: prepare a result vector to hold out true/false answers
        std::vector<bool> result;
        //step 3: loop through each kid's candy count
        for(int i = 0; i<candies.size(); i++){
            //step4: check if giving them extra candies makes them a leader
            if(candies[i] + extraCandies >= maxCandies){
                result.push_back(true);
            }else{
                result.push_back(false);
            }
        }
        return result;
    }
};