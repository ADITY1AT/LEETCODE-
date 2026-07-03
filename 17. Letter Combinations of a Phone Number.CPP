class Solution {
public:
    int n;
    vector<string> res;
    void f(string digits, unordered_map<char, string>& mp, int index,
           string& ans) {
        if (index == n ) {
            res.push_back(ans);
            return;
        }
            for (char c : mp[digits[index]]) {
                ans.push_back(c);
                f(digits, mp, index + 1, ans);
                ans.pop_back();
            }
        }    
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";

        n = digits.size();
        string ans="";
        f(digits,mp,0,ans);

        return res;
    }
};
