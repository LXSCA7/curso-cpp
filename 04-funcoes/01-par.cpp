#include <iostream>

using namespace std;

bool pegaPar(int numero);

int main() {
    int numero;

    cout << "insira um numero: ";
    cin >> numero;

    pegaPar(numero);

    if (pegaPar(numero)) {
        cout << numero << " e par!";
        return 0;
    }

    cout << numero << " e impar!";
    return 0;
}

bool pegaPar(int numero) {
    if (numero % 2 == 0)
        return true;

    return false;
}