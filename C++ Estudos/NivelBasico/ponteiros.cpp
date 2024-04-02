/*
    PONTEIROS:

    um ponteiro é uma variável que armazena o endereço de memória de outra variável.
    Em vez de armazenar diretamente o valor da variável, um ponteiro armazena o local
    onde o valor está armazenado na memória.

    Isso proporciona uma maneira eficiente de manipular dados,
    especialmente ao lidar com funções e alocação dinâmica de memória.
*/

#include <iostream>

using namespace std;

void ex0(){
    int var1;
    int* pont1;
    var1 = 5;
    pont1 = &var1;
    cout << "ENDERECO: " << pont1  << " Valor: " << *pont1 << endl;
}

void ex1(){
    string meuNome = "Autor";
    string* nomePtr = &meuNome;
    *nomePtr += " secreto";
    cout << "O meu nome eh: " << meuNome << endl;
}

void ex2(){
    int notaNaProva = 10;
    int& refInt = notaNaProva;
    string nomeDoAluno = "Carlos";
    cout <<  refInt << endl;
    cout << "Endereco de memoria da variavel que contem o nome " << nomeDoAluno << ": " << &nomeDoAluno << endl;
}


int main()
{
    ex0();
    ex1();
    ex2();

    return 0;
}