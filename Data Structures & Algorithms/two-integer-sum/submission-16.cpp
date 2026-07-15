class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> my_map;
        vector<int> solution;
        for(int i {}; i < nums.size(); ++i){
            int n = nums[i];
            int j = target - n;  // target = n + j
            if (my_map.contains(j)){
                solution.push_back(my_map[target - n]);
                solution.push_back(i);
                return solution;
            }
            my_map[n] = i; 
        }
        return solution;
    }
};
