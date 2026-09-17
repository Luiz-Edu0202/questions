#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    int modulo = pow(10,9) + 7;
    string palavra;

    long potenciaModulo[1001];
    for (int i = 0; i < 1001; ++i)
    {
        long result = 1;
        for (int j = 0; j < i; ++j)
        {
            result = (result * 26LL) % modulo;
        }
        potenciaModulo[i] = result;
    }

    while (cin >> palavra)
    {
        long long i = 0;
        long long num = 0;
        reverse(palavra.begin(), palavra.end());

        for (auto caractere: palavra)
        {
            num += ((caractere - 'A') * potenciaModulo[i]) % modulo;
            //cout << "num = " << num << endl << "potencia = " << potencia << endl << "caractere:" << caractere << endl;
            i++;
        }
        cout << num % modulo << endl;
    }

    return 0;
}
