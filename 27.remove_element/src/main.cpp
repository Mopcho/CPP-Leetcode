#include <vector>
#include <iostream>

class Solution {
public:
    static int removeElement(std::vector<int>& nums, int val) {
        int removedCount = 0;

        for (int unsigned i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                removedCount++;
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        
        return removedCount;
    }
};

int main() {
    std::vector<int> nums = {2,3,3,2};
    int valueToRemove = 2;

    int removeCount = Solution::removeElement(nums, valueToRemove);

    for (auto elem : nums)
    {
        std::cout << elem << " ";
    }

    std::cout << '\n';

    std::cout << "Removed Elements Count: " << removeCount;
}