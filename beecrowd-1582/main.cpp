#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


int mdc(int a, int b)
{
    while (b != 0)
    {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int main()
{
    do
    {
        vector<int> triangulo;
        int lado;
        for (int i = 0; i < 3; ++i)
        {
            cin >> lado;
            triangulo.push_back(lado);
        }
        sort(triangulo.begin(),triangulo.end());

        if ((triangulo[2] * triangulo[2]) == (triangulo[1] * triangulo[1]) + (triangulo[0] * triangulo[0]))
        {
            if (mdc(mdc(triangulo[0],triangulo[1]),triangulo[2]) <= 1)
            {
                cout << "tripla pitagorica primitiva" << endl;
            }
            else
            {
                cout << "tripla pitagorica" << endl;
            }
        }
        else
        {
            cout << "tripla" << endl;
        }
    }while (cin.get() != EOF);
    return 0;
}