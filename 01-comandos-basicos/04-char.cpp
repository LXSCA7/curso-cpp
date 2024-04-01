#include <iostream>

using namespace std;

int main(void) {
    char c = 'a';
    char c2 = 'b';

    char aspas_simples = '\'';

    int soma = c + c2;

    cout << "caracter = " << c << endl;
    cout << "ascii = " << (int)c << endl;

    cout << soma << endl;
    cout << aspas_simples;
    return 0;
}