#include <iostream>

using namespace std;

void foo(int aux[]) {
    aux[0] = 100;
}

int main() {
    int* vet = new int[10];
    int aux[10];

    *(vet + 0) = 10;
    *(vet + 1) = 20;
    *(vet + 2) = 30;

    cout << *(vet + 0) << endl;
    cout << *(vet + 1) << endl;
    cout << *(vet + 2) << endl << endl;

    aux[0] = 10;
    aux[1] = 20;
    aux[2] = 30;

    cout << *(aux + 0) << endl;
    cout << *(aux + 1) << endl;
    cout << *(aux + 2) << endl;

    foo(aux);
    cout << *(aux + 0) << endl;
}