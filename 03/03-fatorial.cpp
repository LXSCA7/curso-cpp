#include <iostream>

using namespace std;

int main() {
    int numero;
    int fat = 1;
    int resultado = 0;

    cout << "insira o numero: ";
    cin >> numero;

    for (int i = 1; i < numero; i++) {
        fat = fat * (i + 1);
    }
    cout << "fatorial de " << numero << "= " << fat;

    return 0;
}