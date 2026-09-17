#include <iostream>
#include <unordered_set>
#include <set>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums)
{
    set<int> set;
    for (auto num: nums)
    {
        set.insert(num);
    }
    int k = set.size();
    for (int i = 0; i < k; ++i)
    {
        nums[i] = *set.begin();
        set.erase(set.begin());
    }
    return k;
}

int main()
{
    vector<int> nums1 = {1,1,2};
    vector<int> nums2 = {0,0,1,1,1,2,2,3,3,4};
    vector<int> nums3 = {-3,-1,0,0,0,3,3};

    cout << removeDuplicates(nums1) << endl;//2
    for (auto n: nums1)
    {
        cout << n << " ";
    }
    cout << endl << endl;
    cout << removeDuplicates(nums2) << endl;//5
    for (auto n: nums2)
    {
        cout << n << " ";
    }
    cout << endl << endl;
    cout << removeDuplicates(nums3) << endl;//4
    for (auto n: nums3)
    {
        cout << n << " ";
    }
    cout << endl << endl;
    return 0;
}
