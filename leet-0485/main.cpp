#include <iostream>
#include <vector>

using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums)
{
    int num = 0, maior = 0;

    for (auto n: nums)
    {
        if (n == 1)
        {
            num++;
        }

        if (num > maior)
        {
            maior = num;
        }

        if (n == 0)
        {
            num = 0;
        }
    }
    return maior;
}

int main()
{

    vector<int> caso1 = {1,1,0,1,1,1};
    vector<int> caso2 = {1,0,1,1,0,1};

    cout << findMaxConsecutiveOnes(caso1) << endl;
    cout << findMaxConsecutiveOnes(caso2) << endl;

    return 0;
}
