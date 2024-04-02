#include <iostream>
#include <math.h>

using namespace std;


float soma(float a, float b){
    return a + b;
}

float subtracao(float a, float b){
    return a - b;
}

float multiplicacao(float a, float b){
    return a * b;
}

float divisao(float a, float b){
    return a / b;
}

int resto(int a, int b){
    return a % b;
}

int main(){
    cout << soma(1,2) << endl;
    cout << subtracao(2,2) << endl;
    cout << multiplicacao(2,2) << endl;
    cout << divisao(2,2) << endl;
    cout << resto(2,2) << endl;
    cout << pow(2,2) << endl;
}