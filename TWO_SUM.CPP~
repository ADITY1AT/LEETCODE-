#include <unordered_map>
#include <vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> ans;

        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++) {

            int comp = target - nums[i];
            if (map.find(comp) != map.end()) {
                ans.push_back(map[comp]);
                ans.push_back(i);
            }
            map[nums[i]] = i;
        }

        return ans;
    }
};
