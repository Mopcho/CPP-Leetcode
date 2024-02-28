#include <iostream>
#include <vector>

// What I know:
// Where the first vector's 0 starts
// Both of the vector's lenghts

class Solution {
public:
    void merge(std::vector<int>& nums1, int unsigned m, std::vector<int>& nums2, int n) {
        for (int unsigned i = m; i < nums1.size(); i++) {
            nums1[i] = nums2[i-m];
        }

        for (int unsigned i = 0; i < nums1.size(); i++) {
            for (int unsigned a = i + 1; a < nums1.size(); a++) {
                if (nums1[a] < nums1[i]) {
                    int temp = nums1[i];
                    nums1[i] = nums1[a];
                    nums1[a] = temp;
                }
            }
        }

        for (int unsigned i = 0; i < nums1.size(); i++) {
            std::cout << nums1[i];
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
}