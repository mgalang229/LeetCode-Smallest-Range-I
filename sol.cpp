class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        int dist = mx - mn;
        if (dist > k * 2) {
            return mx - k - mn - k;
        }
        return 0;
    }
};
