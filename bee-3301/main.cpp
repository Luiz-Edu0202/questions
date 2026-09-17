#include <iostream>

using namespace std;

int main()
{
    int h,z,l;
    string nome;
    cin >> h >> z >> l;
    if ((h < z && z < l) || (h > z && z > l)) nome = "zezinho";
    else if ((z < h && h < l) || (z > h && h > l)) nome = "huguinho";
    else nome = "luisinho";

    cout << nome << endl;

    return 0;
}
