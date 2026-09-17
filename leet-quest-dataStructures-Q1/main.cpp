#include <iostream>
#include <vector>

using namespace std;

vector<int> getConcatenation(vector<int>& nums)
{
    vector<int> result((nums.size())*2);
    for (int i = 0; i < nums.size(); ++i)
    {
        result[i] = nums[i];
        result[i+nums.size()] = nums[i];
    }
    return result;
}

int main() {
    vector<int> nums = {1,2,1};
    nums = getConcatenation(nums);
    for (auto n: nums)
    {
        cout << n << " ";
    }

    return 0;
}
