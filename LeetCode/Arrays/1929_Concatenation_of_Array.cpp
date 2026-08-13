// LeetCode 1929 - Concatenation of Array
// Topic: Arrays, Vector
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;

        for (int x : nums) {
            ans.push_back(x);
        }

        return ans;
    }
};