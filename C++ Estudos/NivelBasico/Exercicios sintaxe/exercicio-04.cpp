#include <iostream>

using namespace std;

int potencia(int a, int b)
{
    int result = 1;
    for (int i = 1; i <= b; i++)
    {
        result *= a;
    }
    return result;
}

int main()
{
    int a = 0;
    int b = 0;
    bool exit = true;
    while (exit)
    {
        cout << "Digite o primeiro numero: " << endl;
        cin >> a;
        cout << "Digite o segundo numero: " << endl;
        cin >> b;

        cout << "O resultado eh: " << potencia(a, b) << endl;
        cout << "Deseja continuar? (S = 1 /N = 0)";
        cin >> exit;
    }

    return 0;
}
