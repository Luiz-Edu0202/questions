#include <iostream>

using namespace std;

int main()
{
    int jogadas, jogadaMoeda, mariaVence, joaoVence;

    while (cin >> jogadas)
    {
        if (jogadas == 0) break;
        mariaVence = 0;
        joaoVence = 0;
        for (int i = 0; i < jogadas; ++i)
        {
            cin >> jogadaMoeda;
            if (jogadaMoeda == 0)
            {
                mariaVence++;
            }
            else
            {
                joaoVence++;
            }
        }
        cout << "Mary won " << mariaVence << " times and John won " << joaoVence <<" times" << endl;
    }

    return 0;
}
