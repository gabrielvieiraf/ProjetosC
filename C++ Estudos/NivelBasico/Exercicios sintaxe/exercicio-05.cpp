#include <iostream>

using namespace std;

bool podeParticipar(int idade, float renda){
    return idade >= 21 && renda < 1200;
}

int main(){
    cout << podeParticipar(21, 1199) << endl;
    return 0;
}