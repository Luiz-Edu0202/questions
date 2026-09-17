

#include <iostream>
#include <vector>

using namespace std;


int buscaBinaria(int * array,int inicio, int fim,int target)
{
    if(inicio > fim) return -1;

    int meio = (inicio + fim) / 2;

    if(array[meio] == target) return meio;
    if(array[meio] > target) return buscaBinaria(array,inicio,meio-1,target);
    else return buscaBinaria(array,meio+1,fim,target);

}




double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
    int index1 = 0, index2 = 0, indexMaior = 0;
    if ((nums1.size() + nums2.size()) % 2 != 0)
    {
        int metade = (nums1.size() + nums2.size() + 1) / 2;
        for (int i = 0; i < metade; i++)
        {
            if (nums1[index1] < nums2[index2])
            {
                index1 = index1 + 1;
                indexMaior = 0;
            }
            else if (nums1[index1] > nums2[index2])
            {
                index2 = index2 + 1;
                indexMaior = 1;
            }
        }
        if (indexMaior == 0) return nums1[index1];
        else return nums2[index2];
    }
    else
    {
        int metade = (nums1.size() + nums2.size() + 2) / 2;
        int anterior = 0;
        for (int i = 0; i < metade; i++)
        {
            if (nums1[index1] < nums2[index2])
            {
                index1 = index1 + 1;
                anterior = indexMaior;
                indexMaior = 0;
            }
            else if (nums1[index1] > nums2[index2])
            {
                index2 = index2 + 1;
                anterior = indexMaior;
                indexMaior = 1;
            }
        }

        int total = 0;
        if (indexMaior == 0) total = nums1[index1];
        else total = nums2[index2];

        if (anterior == 0) total += nums1[index1];
        else total += nums2[index2];

        return total / 2.0;
    }


}


int main()
{
    vector<int> nums1Teste1 = {1,3};
    vector<int> nums2Teste1 = {2};


    double result1 = findMedianSortedArrays(nums2Teste1,nums1Teste1);


    cout << "Teste 1: " << result1 << endl;


    vector<int> nums1Teste2 = {1,2};
    vector<int> nums2Teste2 = {3,4};


    double result2 = findMedianSortedArrays(nums2Teste2,nums1Teste2);


    cout << "Teste 2: " << result2 << endl;




    return 0;
}

