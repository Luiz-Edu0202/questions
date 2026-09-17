#include <iostream>
#include <math.h>
using namespace std;

long recursao(long base, int n, long mod)
{
    if (n <= 0) return 1;
    long result = recursao(base,n/2,mod);
    result = (result * result) % mod;
    if (n % 2 != 0)
    {
        result = (result * base) % mod;
    }
    return result;
}

int main()
{
    long res = 3, modulo = pow(2,31) -1;
    int num;

    cin >> num;

    res = recursao(res,num,modulo);

    cout << res << endl;
    return 0;
}

