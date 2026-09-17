#include <iostream>

using namespace std;

int main()
{
    int num,maior = 0,index = 0;

    for (int i = 1; i < 101; ++i)
    {
        cin >> num;
        if (i == 0)
        {
            maior = num;
            index = 0;
        }
        else if (num >= maior)
        {
            maior = num;
            index = i;
        }
    }

    cout << maior << endl << index << endl;
    return 0;
}
