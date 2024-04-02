/*
    EXERCÍCIO 04: CONCATENANDO VETORES

    existe a forma neandertal e a forma legalzinha de fazer.
*/

#include <iostream>

using namespace std;

int getVectorSize(int* vector)
{
    return vector[0];
}

int* concatenate(int* vector1, int* vector2)
{
    int size1 = getVectorSize(vector1);
    int size2 = getVectorSize(vector2);

    int* concatenatedVector = new int[size1 + size2 + 1];
    concatenatedVector[0] = size1 + size2;

    for (int i = 1; i <= size1; ++i)
    {
        concatenatedVector[i] = vector1[i];
    }

    for (int i = size1 + 1; i <= size1 + size2; ++i)
    {
        concatenatedVector[i] = vector2[i - size1];
    }

    return concatenatedVector;
}

int main()
{
    int* vec1;
    int* vec2;

    vec1 = new int[4]{3, 10, 20, 30};
    vec2 = new int[4]{3, 40, 50, 60};

    int tam1 = getVectorSize(vec1);
    int tam2 = getVectorSize(vec2);

    cout << "Tamanho do vec1: " << tam1 << endl;
    cout << "Tamanho do vec2: " << tam2 << endl;

    int* concatenatedVec = concatenate(vec1, vec2);

    int tamConcatenado = getVectorSize(concatenatedVec);
    cout << "Tamanho do vetor concatenado: " << tamConcatenado << endl;

    for (int i = 1; i <= tamConcatenado; ++i)
    {
       cout << concatenatedVec[i] << " ";
    }

    delete[] vec1;
    delete[] vec2;
    delete[] concatenatedVec;

    return 0;
}
