// https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        for(auto i:nums)sum+=abs(mid-i);
        return sum;
    }
};