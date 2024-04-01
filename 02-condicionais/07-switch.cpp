#include <iostream>

using namespace std;

int main() {

    int num = 10;
    switch (num) {
        case 9:
            cout << "numero 9";
            break;
        case 10:
            cout << "numero = 10";
            break;
        default:
            cout << "numero nao encontrado";
            break;
    }

    return 0;
}