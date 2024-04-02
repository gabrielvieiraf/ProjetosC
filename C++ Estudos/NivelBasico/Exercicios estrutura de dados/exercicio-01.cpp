/*
    EXERCÍCIO 01:
    Declare um array de inteiros e um ponteiro para inteiro.
    Atribua o endereço do primeiro elemento do array ao ponteiro.
    Utilize aritmética de ponteiros para percorrer o array e imprima cada elemento.


    Por que não usar new para criar um array em C++? 3 principais razões:

    1- É preciso liberar a memória manualmente usando
    2- O tamanho do array criado com new é fixo
    3- não é possível usar as formas mais recentes do laço for
*/

#include <iostream>
#include <vector>
#include <array>

using namespace std;

void jeito1()
{
    int* intPtr;
    intPtr = new int[3]{10, 20, 30};

    cout << "jeito 01: " << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << intPtr[i] << endl;
    }
}

void jeito2()
{
    /*
        ARRAY:
        O objeto de tipo array tem tamanho fixo (ao contrário do vector), mas tem duas vantagens em relação ao array alocado manualmente com new:
        - Não é preciso liberar a memória dos objetos de tipo array manualmente após o seu uso;
        - É possível usar as formas mais sofisticadas dos laços for para percorrer containers de tipo array.
    */
    array<int, 3> intArray{10, 20, 30};
    cout << "jeito 02: " << endl;
    for (const auto& intValue : intArray)
    {
        cout << intValue << endl;
    }
}

void jeito3()
{
    /*
        VECTOR:
        além de aumentar e diminuir seu tamanho automaticamente, e gerenciar sua própria memória: o usuário não precisa se preocupar
        em deletar a memória usada pelo vetor depois da sua utilização.
    */
    vector<int> intPtr;

    intPtr.push_back(10);
    intPtr.push_back(20);
    intPtr.push_back(30);

    cout << "jeito 03: " << endl;

    for (const auto& intValue : intPtr)
    {
        cout << intValue << endl;
    }
}

int main()
{
    jeito1();
    jeito2();
    jeito3();
    return 0;
}