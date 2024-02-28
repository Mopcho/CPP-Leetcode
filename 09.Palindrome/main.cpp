#include <string>
#include <iostream>
#include <cstring>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string str = std::to_string(x);
        char* char_array = new char[str.length() + 1];
        strcpy(char_array, str.c_str());

        for (int i = 0; i < strlen(char_array); i++) {
            if (char_array[i] != char_array[strlen(char_array) - 1 - i]) {
                delete[] char_array;
                return false;
            }
        }

        return true;
    }
};

int main(int argc, char* argv[]) {
    int test_var = std::stoi(argv[2]);

    Solution sol;

    bool isPalindrome = sol.isPalindrome(test_var);

    std::cout << isPalindrome;
}