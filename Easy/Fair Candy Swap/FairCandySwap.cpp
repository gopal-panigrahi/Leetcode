class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int aliceCandies = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        int bobCandies = accumulate(bobSizes.begin(), bobSizes.end(), 0);
        int target = (aliceCandies - bobCandies)/2;
        
        unordered_map<int, bool> bob; 
        for(int b : bobSizes) {
            bob[b] = true;
        }

         for(int b : aliceSizes) {
                if(bob[b - target]) {
                    return { b, b-target};
                }
            }
        return {-1,-1};
    }
};