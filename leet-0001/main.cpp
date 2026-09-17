#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int busca_binaria(vector<int>& array, int inicio, int final,int valor)
{
    if (inicio > final) return -1;
    int meio = (inicio+final) / 2;
    if (array[meio] == valor) return meio;
    if (array[meio] > valor) return busca_binaria(array,inicio,meio-1,valor);
    else return busca_binaria(array,meio+1,final,valor);
}

vector<int> twoSum(vector<int>& nums, int target)
{
    unordered_map<int,int> hash_map;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (hash_map.find(target - nums[i]) == hash_map.end())
        {
            hash_map[nums[i]] = i;
        }
        else
        {
            auto iterador = hash_map.find(target - nums[i]);
            return vector<int> {iterador->second,i};
        }
    }
    return vector<int> {};
}

int main()
{
    vector<int> pergunta1 {2, 7, 11, 15};
    vector<int> pergunta2 {3, 2, 4};
    vector<int> pergunta3 {3, 3};
    vector<int> pergunta4 {0,4,3,0};

    vector<int> resposta1 = twoSum(pergunta1,9);
    vector<int> resposta2 = twoSum(pergunta2,6);
    vector<int> resposta3 = twoSum(pergunta3,6);
    vector<int> resposta4 = twoSum(pergunta4,0);

    for_each(resposta1.begin(), resposta1.end(), [](int x)
    {
        cout << x << " ";
    });
    cout << endl;

    for_each(resposta2.begin(), resposta2.end(), [](int x)
    {
        cout << x << " ";
    });
    cout << endl;

    for_each(resposta3.begin(), resposta3.end(), [](int x)
    {
        cout << x << " ";
    });
    cout << endl;

    for_each(resposta4.begin(), resposta4.end(), [](int x)
    {
        cout << x << " ";
    });
    cout << endl;
    return 0;
}
