#include <iostream>
using namespace std;

int main() {
    int N = 4, matriz[4][4], v = 1, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            matriz[i][j] = v++;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i < 2 && j < 2) s1 += matriz[i][j];
            else if (i < 2)     s2 += matriz[i][j];
            else if (j < 2)     s3 += matriz[i][j];
            else                s4 += matriz[i][j];
        }
    }

    cout << "Suma C1: " << s1 << endl;
    cout << "Suma C2: " << s2 << endl;
    cout << "Suma C3: " << s3 << endl;
    cout << "Suma C4: " << s4 << endl;

    return 0;
}
