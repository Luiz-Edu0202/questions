#include <iostream>

using namespace std;

int busca_binaria(int * array, int inicio, int final,int valor)
{
    if (inicio > final) return -1;
    int meio = (inicio+final) / 2;
    if (array[meio] == valor) return meio;
    if (array[meio] > valor) return busca_binaria(array,inicio,meio-1,valor);
    else return busca_binaria(array,meio+1,final,valor);
}

int main()
{
    int numCasas = 0, soma, indice;

    cin >> numCasas;
    int casas[numCasas];

    for (int i = 0; i < numCasas; ++i)
    {
        cin >> casas[i];
    }

    cin >> soma;

    for (int i = 0; i < numCasas; ++i)
    {
        indice = busca_binaria(casas,i,numCasas,soma - casas[i]);
        if (indice != -1)
        {
            if (casas[indice] > casas[i]) cout << casas[i] << " " << casas[indice] << endl;
            else cout << casas[indice] << " " << casas[i] << endl;
            return 0;
        }
    }

    return 0;
}
