class Solution {
public:
    bool isAnagram(string s, string t) {
        multiset<char> s_set;
        multiset<char> t_set;
        if(s.length() != t.length()) return false;
        for(char c : s){
            s_set.insert(c);
        }
        for(char c: t){
            t_set.insert(c);
        }
        for(auto it = s_set.begin(); it != s_set.end(); ++it){
            if(s_set.count(*it) != t_set.count(*it)) return false;
        }
        return true;
    }
};
