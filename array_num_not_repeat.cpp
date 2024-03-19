#include <iostream>
#include <vector>
using namespace std;
int findSingleNumber(const vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num;
    }
    return result;
}
int main() {
    vector<int> nums;
    cin >> nums;

    int singleNumber = findSingleNumber(nums);

    cout << "The number that is not repeated is: " << singleNumber <<endl;

    return 0;
}
