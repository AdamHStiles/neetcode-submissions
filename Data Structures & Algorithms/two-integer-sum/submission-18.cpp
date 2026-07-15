class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> my_map;
        for(int i {}; i < nums.size(); ++i){
            int n = nums[i];
            int j = target - n;  // target = n + j
            if (my_map.contains(j)){
                return {my_map[j], i};
            }
            my_map[n] = i; 
        }
        return {};
    }
};
