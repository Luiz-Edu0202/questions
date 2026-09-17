#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int joao = 0,jose = 0, num_tesouros = 0;

    while (cin >> joao >> jose >> num_tesouros)
    {
        if ((joao == 0) && (jose == 0) && (num_tesouros == 0)) break;

        vector<int> tesouros(num_tesouros);
        vector<int> acumulador(num_tesouros);
        for (int i = 0; i < num_tesouros; ++i)
        {
            cin >> tesouros[i];

            if (i == 0) acumulador[i] = tesouros[i];
            else acumulador[i] = tesouros[i] + acumulador[i-1];
        }

        int diferenca = 0;
        if (joao > jose) diferenca = joao - jose;
        else diferenca = jose - joao;


    }


    return 0;
}
