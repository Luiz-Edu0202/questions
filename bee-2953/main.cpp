#include <iostream>
#include <vector>

using namespace std;

int mod = 1000000007;

int contando_casas(int n)
{
    vector<int> tabuleiro(n+1,0);
    tabuleiro[1] = 1;
    if (n >= 2) tabuleiro[2] = 0;
    if (n >= 3) tabuleiro[3] = 1;

    for (int i = 4; i <= n; ++i)
    {
        tabuleiro[i] = (tabuleiro[i-2] + tabuleiro[i-3]) % mod;
    }
    return tabuleiro[n];
}


int main()
{
    int casas;

    cin >> casas;
    cout << contando_casas(casas) << endl;

    return 0;
}
