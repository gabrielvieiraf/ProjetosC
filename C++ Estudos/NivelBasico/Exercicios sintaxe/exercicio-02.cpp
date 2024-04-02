#include <iostream>

using namespace std;

void calculaMedia(float a, float b, float c)
{
    float mediaAluno = (a + b + c) / 3;
    int notaDeCorte = 6;

    if (mediaAluno < notaDeCorte)
    {
        cout << "Voce eh muito burro ein meu chapa" << endl;
    }
    else
    {
        cout << "Parabens, voce fez o minimo" << endl;
    }
}

int main()
{
    calculaMedia(6, 10, 8);
    return 0;
}