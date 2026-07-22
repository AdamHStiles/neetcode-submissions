class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // since they are garunteed to be lowercase I can just sum the chars in the str, anagrams wil have equal sums
        vector<vector<string>> result;
        unordered_map<string, int> sorted_to_i; // maps sums of str to index on result
        for(int i {}; i < strs.size(); ++i){
            string sorted = strs[i];
            sort(sorted.begin(), sorted.end());
            if(sorted_to_i.count(sorted)){
                result[sorted_to_i[sorted]].push_back(strs[i]);
            }else{
                // if str not in set
                sorted_to_i[sorted] = result.size();
                result.push_back({strs[i]});
            }
        }
        return result;
    }
};
