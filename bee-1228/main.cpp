#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,aux;
    while (cin >> n)
    {
        int result = 0;
        vector<int> compsLargada;
        vector<int> compsChegada;
        for (int i = 0; i < n; ++i)
        {
            cin>>aux;
            compsLargada.push_back(aux);
        }
        for (int i = 0; i < n; ++i)
        {
            cin>>aux;
            compsChegada.push_back(aux);
        }
        for (int i = 0; i < n; ++i)
        {
            aux = i - binarySearch(compsLargada,n,compsChegada[i]);
            if (aux > 0)
            {
                result += aux;
            }
        }
        cout << result << endl;
    }
    return 0;
}
