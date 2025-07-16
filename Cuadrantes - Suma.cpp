#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese numero de columnas y filas: ";
    cin >> n;

    int m[n][n];
    int suma1 = 0, suma2 = 0, suma3 = 0, suma4 = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }

    int mitad = n / 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < mitad && j < mitad)
                suma2 += m[i][j]; 
            else if (i < mitad && j >= mitad)
                suma1 += m[i][j]; 
            else if (i >= mitad && j < mitad)
                suma3 += m[i][j]; 
            else
                suma4 += m[i][j]; 
        }
    }

    cout << "Cuadrante 1: " << suma1 << endl;
    cout << "Cuadrante 2: " << suma2 << endl;
    cout << "Cuadrante 3: " << suma3 << endl;
    cout << "Cuadrante 4: " << suma4 << endl;

    return 0;
}
