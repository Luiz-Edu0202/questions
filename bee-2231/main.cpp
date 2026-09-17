#include <iostream>

using namespace std;


int main()
{
    int n, m, numeroTeste = 0;

    while (cin >> n >> m)
    {
        int maiorMedia, menorMedia, soma, media;
        if ((n==0)&&(m==0)) break;
        numeroTeste++;
        int temperaturas[n];
        int temAcumulda[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> temperaturas[i];
            if (i == 0)
            {
                temAcumulda[i] = temperaturas[i];
            }
            else
            {
                temAcumulda[i] = temperaturas[i] + temAcumulda[i-1];
            }
        }

        for (int i = m-1; i < n; ++i)
        {
            if (i == m-1)
            {
                soma = temAcumulda[i];
                media = soma / m;
                menorMedia = media;
                maiorMedia = media;
            }
            else
            {
                soma = temAcumulda[i] - temAcumulda[i-m];
                media = soma / m;
                if (media > maiorMedia)
                {
                    maiorMedia = media;
                }
                if (media < menorMedia)
                {
                    menorMedia = media;
                }
            }
        }

        cout << "Teste " << numeroTeste << endl;
        cout << menorMedia << " " << maiorMedia << endl << endl;
    }


    return 0;
}
