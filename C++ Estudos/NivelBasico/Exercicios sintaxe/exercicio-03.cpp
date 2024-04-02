#include <iostream>

using namespace std;

int factorial(int a)
{
    int result = 1;
    for (int i = a; i > 1; i--)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int a = 10;
    cout << "fatorial de " << a << "é: " << factorial(a) << endl;
    return 0;
}