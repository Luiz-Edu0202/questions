#include <iostream>

using namespace std;

int main()
{
    long ini,fim, total;

    cin >> ini;
    cin >> fim;
    total = ((ini + fim) * (fim - ini + 1)) / 2;

    cout << total << endl;

    return 0;
}
