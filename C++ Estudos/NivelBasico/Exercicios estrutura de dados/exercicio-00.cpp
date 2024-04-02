/*
Exercício 00:
    Crie um ponteiro chamado ptrInt e inicialize o mesmo com o endereço da variável x.
    Após isso, faça a impressão do valor armazenado por x usando somente o ponteiro ptrInt.
*/
#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int* ptrInt = &x;

    cout << *ptrInt << endl;

    return 0;
}