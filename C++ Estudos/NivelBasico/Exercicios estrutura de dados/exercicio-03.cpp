/*
EXERCICIO 03:
    Crie uma estrutura representando uma pessoa com campos como nome,
    idade, e endereço. Em seguida, escreva funções que usem ponteiros para
    manipular e exibir informações sobre essa estrutura.
*/

#include <iostream>

using namespace std;

struct Person
{
    string name;
    string address;
    int age;
};

void setPersonData(Person* person, string Person::*key, const string& value)
{
    person->*key = value;
}

void setPersonData(Person* person, int Person::*key, int value)
{
    person->*key = value;
}

template <typename T>
void getPersonData(const Person* person, T Person::*key)
{
    cout << person->*key << endl;
}

int main()
{
    Person person = {
        "Cria",
        "Rua dos Bobos numero 0",
        1000};

    getPersonData(&person, &Person::name);
    getPersonData(&person, &Person::age);

    setPersonData(&person, &Person::name, "AINwewewe");
    setPersonData(&person, &Person::age, 20);

    getPersonData(&person, &Person::name);
    getPersonData(&person, &Person::age);

    return 0;
}