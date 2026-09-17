#include <iostream>
#include <vector>

using namespace std;

int numIdenticalPairs(vector<int>& nums)
{
    int count = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        for (int j = 0; j < nums.size(); ++j)
        {
            if ((nums[i] == nums[j]) && i < j)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    vector<int> nums1 = {1,2,3,1,1,3};
    vector<int> nums2 = {1,1,1,1};
    vector<int> nums3 = {1,2,3};

    cout << numIdenticalPairs(nums1) << endl;//4
    cout << numIdenticalPairs(nums2) << endl;//6
    cout << numIdenticalPairs(nums3) << endl;//0
    return 0;
}
