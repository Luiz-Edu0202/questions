#include <iostream>

using namespace std;

int main()
{
    int num_salas = 0,max_vidas = 0,vidas = 0,entrada = 0,saida = 0;
    cin >> num_salas;
    int salas[num_salas];
    int acumulado_vidas_salas[num_salas];

    for (int i = 0; i < num_salas; ++i)
    {
        cin >> salas[i];
        if (i == 0) acumulado_vidas_salas[i] = salas[i];
        else acumulado_vidas_salas[i] = salas[i] + acumulado_vidas_salas[i-1];
    }

    for (int i = 0; i < num_salas; ++i)
    {
        if (i == 0)
        {
            max_vidas = acumulado_vidas_salas[i];
            vidas = acumulado_vidas_salas[i];
        }
        else if (acumulado_vidas_salas[saida] - acumulado_vidas_salas[entrada] > vidas)
        {
            vidas = acumulado_vidas_salas[saida] - acumulado_vidas_salas[entrada];

            if (vidas > max_vidas) max_vidas = vidas;
        }
        else
        {
            while ((acumulado_vidas_salas[saida] - acumulado_vidas_salas[entrada] < vidas)||(entrada == saida))
            {
                entrada++;
                vidas = acumulado_vidas_salas[saida] - acumulado_vidas_salas[entrada];
                if (vidas > max_vidas) max_vidas = vidas;
            }
        }

        saida++;
    }

    cout << max_vidas << endl;
    return 0;
}
