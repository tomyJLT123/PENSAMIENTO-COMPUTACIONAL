#include <iostream>
using namespace std;

int tribonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1 || n == 2)
        return 1;
    else
        return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
}

void imprimirSerie(int n, int actual) {
    if (actual > n)
        return;

    cout << tribonacci(actual) << " ";
    imprimirSerie(n, actual + 1);
}

int main() {
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    cout << "Serie Tribonacci desde T(1) hasta T(" << n << "): ";
    imprimirSerie(n, 1);  
    cout << endl;
    return 0;
}