class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        int *freq_s = (int*)calloc(26, sizeof(int));
        int *freq_t = (int*)calloc(26, sizeof(int));

        for(char c : s){
            freq_s[c - 'a']++;
        }
        for(char c : t){
            freq_t[c - 'a']++;
        }
        for(int i {0}; i < 26; ++i){
            if(freq_s[i] != freq_t[i]) return false;
        }
        return true;
    }
};
