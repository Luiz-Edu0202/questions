#include <iostream>

using namespace std;

const int MOD = 1000000009;

int main()
{
    long memoria[100001];
    int num = 0;

    memoria[3] = 1;
    memoria[4] = 4;

    for (int i = 1; i < 100001; i++)
    {
        if (i <= 4) continue;
        memoria[i] = (memoria[i-1] * i) % MOD;
    }

    while (cin >> num)
    {
        if (num == 0) break;
        cout << memoria[num] << endl;
    }

    return 0;
}
