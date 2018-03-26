# Moore Voting Algorithm
# From given hint: How many majority elements could it possibly have?
# Answer: There are at most 2 majority elements. (If there are 3 majority elements that appears more than n/3 times, there 
# will be more than n elements in the list, which is impossible.

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        int m = 0, n = 1, cm = 0, cn = 0;
        for (auto a : nums) {
            if (a == m) ++cm;
            else if (a == n) ++cn;
            else if (cm == 0) m = a, cm = 1;
            else if (cn == 0) n = a, cn = 1;
            else --cm, --cn;
        }
        cm = cn = 0;
        for (auto &a : nums) {
            if (a == m) ++cm;
            else if (a == n) ++cn;
        }
        if (cm > nums.size() / 3) res.push_back(m);
        if (cn > nums.size() / 3) res.push_back(n);
        return res;
    }
};
        
