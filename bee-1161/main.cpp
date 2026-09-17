#include <iostream>

using namespace std;


long fatorial (long n)
{
    if (n == 0) return 1;
    if (n == 1) return 1;
    return n * fatorial(n - 1);
}


int main()
{
    long num1,num2;

    while (cin >> num1 >> num2)
    {
        cout << fatorial(num1) + fatorial(num2) << endl;
    }

    return 0;
}
