/*
EXERCICIO 02:
    Função de Busca em Array com Ponteiros:
    Implemente uma função que recebe um array e seu tamanho como argumentos,
    bem como um valor a ser procurado no array. A função deve retornar um ponteiro
    para o elemento se ele for encontrado, ou um ponteiro nulo caso contrário.
*/

#include <iostream>
#include <vector>

using namespace std;

int* find(vector<int> array, int value)
{
    for (const auto& intValue : array)
    {
        if (intValue == value)
        {
            return const_cast<int *>(&intValue);
        }
    }
    return nullptr;
}

int main()
{
    vector<int> a = {10, 20, 30, 40};
    cout << *find(a, 40) << endl;
    return 0;
}