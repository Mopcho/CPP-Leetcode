#include <iostream>
#include <vector>

class Solution {
public:
    void merge(std::vector<int>& nums1, int unsigned m, std::vector<int>& nums2, int n) {
        int i = m - 1; // Index for nums1
        int j = n - 1; // Index for nums2
        int k = m + n - 1; // Index for the merged array

        while (i >= 0 && j >= 0) {
            // Compare elements from nums1 and nums2 and place the larger one at the end of nums1
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // If there are remaining elements in nums2, copy them to nums1
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};

int main() {
    std::vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    std::vector<int> nums2 = {2,5,6};
    int n = 3;

    Solution sol;
    sol.merge(nums1, m, nums2, n);

    for (auto elem : nums1)
    {
        std::cout << elem << " ";
    }
}