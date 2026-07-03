class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int i, j;
        for(i = 0; i < nums.size(); ++i){
            for(j = 0; j < nums.size(); ++j){
                if(j == i) continue;
                if(nums[i] == nums[j]) return true;
            }
        }
        return false;
    }
};