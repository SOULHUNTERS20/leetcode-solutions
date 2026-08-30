class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> all;
        for (int x : nums1) all.push_back(x);
        for (int x : nums2) all.push_back(x);
        sort(all.begin(), all.end());

        int n = all.size();
        if (n % 2 == 1) {
            return all[n / 2];
        } else {
            return (all[n / 2 - 1] + all[n / 2]) / 2.0;
        }
    }
};