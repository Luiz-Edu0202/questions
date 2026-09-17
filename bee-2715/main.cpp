#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int numTrabalhos;

    while (cin >> numTrabalhos)
    {
        vector<long> tarefas(numTrabalhos);
        vector<long> acumuladorTarefas(numTrabalhos);
        long diferenca, menorDiferenca = 0;
        for (int i = 0; i < numTrabalhos; ++i)
        {
            cin >> tarefas[i];
            if (i == 0) acumuladorTarefas[i] = tarefas[i];
            else acumuladorTarefas[i] = tarefas[i] + acumuladorTarefas[i-1];
        }

        for (int i = 1; i < numTrabalhos; ++i)
        {
            diferenca = acumuladorTarefas[i-1] - (acumuladorTarefas[numTrabalhos-1] - acumuladorTarefas[i-1]);
            if (diferenca < 0) diferenca = diferenca * -1;

            if (i == 1)
            {
                menorDiferenca = diferenca;
            }
            else if (diferenca < menorDiferenca)
            {
                menorDiferenca = diferenca;
            }
        }

        cout << menorDiferenca << endl;
    }
    return 0;
}
