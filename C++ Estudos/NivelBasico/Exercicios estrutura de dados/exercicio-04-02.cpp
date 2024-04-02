/*
    EXERCÍCIO 04: CONCATENANDO VETORES

    existe a forma neandertal e a forma legalzinha de fazer.
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vetor1 = {1, 2, 3};
    vector<int> vetor2 = {4, 5, 6};

    vetor1.reserve(vetor1.size() + vetor2.size());
    vetor1.insert(vetor1.end(), vetor2.begin(), vetor2.end());

    for (const auto& elemento : vetor1) {
        cout << elemento << " ";
    }

    return 0;
}
