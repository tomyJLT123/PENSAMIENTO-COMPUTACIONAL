#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3, temp;
    int *pa = &a, *pb = &b;

    temp = *pa;
    *pa = *pb;
    *pb = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
