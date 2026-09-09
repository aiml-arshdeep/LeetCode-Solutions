class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
       for(int i =0; i<flowerbed.size(); i++){
        //we check the spot here
       if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) {
        flowerbed[i] = 1; // Plant the flower!
        n--;
        if (n==0){
            return true; //successfully planted all flowers!
        }
    
    }

} 
//if the loop finishes and n is still greater than 0, we failed
  return n<=0;
    }
};