#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subs = {{}};
        
        // Print initial value of subs
        cout << "Step 0: ";
        printSubsets(subs);

        for (int num : nums) {
            int n = subs.size();
            for (int i = 0; i < n; i++) {
                subs.push_back(subs[i]);
                subs.back().push_back(num);

                // Print the value of subs after each iteration
                cout << "Step " << i + 1 << ": ";
                printSubsets(subs);
            }
        }
        return subs;
    }

    // Helper function to print the subsets
    void printSubsets(vector<vector<int>>& subs) {
        cout << "[ ";
        for (const auto& subset : subs) {
            cout << "[ ";
            for (const auto& num : subset) {
                cout << num << " ";
            }
            cout << "] ";
        }
        cout << "]" << endl;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3};
    solution.subsets(nums);
    return 0;
}
