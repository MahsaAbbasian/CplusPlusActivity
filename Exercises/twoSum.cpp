#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(const vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                return {nums[i], nums[j]};
            }
        }
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Found pair: " << result[0] << " + " << result[1] << " = " << target << endl;
    } else {
        cout << "No pair found." << endl;
    }

    return 0;
}
