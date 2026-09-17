#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums)
{
    int last_non_zero = 0;
    int aux;
    for (int i = 0; i < nums.size(); ++i)
    {
        if ((nums[i] != 0) )
        {
            aux = nums[last_non_zero];
            nums[last_non_zero] = nums[i];
            last_non_zero++;
            nums[i] = aux;
        }
    }
}

int main() {
    vector<int> nums1 = {0,1,0,3,12};
    vector<int> nums2 = {0};
    vector<int> nums3 = {1};
    vector<int> nums4 = {2,1};
    vector<int> nums5 = {1,0,1};

    moveZeroes(nums1);
    moveZeroes(nums2);
    moveZeroes(nums3);
    moveZeroes(nums4);
    moveZeroes(nums5);

    for (auto n : nums1)
    {
        cout << n << " ";
    }
    cout << endl;

    for (auto n : nums2)
    {
        cout << n << " ";
    }
    cout << endl;

    for (auto n : nums3)
    {
        cout << n << " ";
    }
    cout << endl;
    for (auto n : nums4)
    {
        cout << n << " ";
    }
    cout << endl;
    for (auto n : nums5)
    {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
