class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;

        // Merge both arrays
        for (int x : nums1)
            nums.push_back(x);

        for (int x : nums2)
            nums.push_back(x);

        // Sort the merged array
        sort(nums.begin(), nums.end());

        int n = nums.size();

        // Odd length
        if (n % 2 == 1) {
            return nums[n / 2];
        }

        // Even length
        return (nums[n / 2 - 1] + nums[n / 2]) / 2.0;
    }
};