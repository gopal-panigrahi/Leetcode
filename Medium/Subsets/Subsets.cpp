class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int size = 1<<nums.size();
        vector<vector<int>> pset;
        for(int i = 0; i < size; i++) {
            vector<int> subset;
            for(int j = 0; j < 10; j++) {
                if(i&(1<<j)) {
                    subset.push_back(nums[j]);
                }
            }
            pset.push_back(subset);
        }
        return pset;
    }
};