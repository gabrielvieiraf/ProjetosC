#include <iostream>
#include <cmath>
#include <tuple>

using namespace std;

std::tuple<float, float> f(int a) {
    int b = -10;
    int c = 5;
    tuple<float, float> result;
    get<0>(result) = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    get<1>(result) = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    
    return result;
}

int main() {
    int a = 1;
    tuple<float, float> result = f(a);
    cout << "As raizes sao: " << get<0>(result) << " e " << get<1>(result) << endl;

    return 0;
}