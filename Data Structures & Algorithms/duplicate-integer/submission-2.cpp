class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> hash_set;
        for(auto it = nums.begin(); it != nums.end(); ++it){
            if(hash_set.contains(*it)) return true;
            hash_set.insert(*it);
        }
        return false;
    }
};