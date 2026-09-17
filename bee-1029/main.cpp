#include <iostream>

using namespace  std;

int f[39];

int fib(int n, int *calls)
{
    if (n == 0)
    {
        //*calls += 1;
        return 0;
    }
    if (n == 1)
    {
        //*calls += 1;
        return 1;
    }
    *calls += 1;
    return fib(n - 1,calls) + fib(n - 2,calls);
}



int main()
{
    int n,caso;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> caso;
        int calls = 0,result;
        result = fib(caso,&calls);
        cout << "fib(" << caso <<") = "<< calls*2<<" calls = "<< result << endl;
    }

    return 0;
}
