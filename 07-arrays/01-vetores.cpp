#include <iostream>

using namespace std;

int main() {
    int numero[20];

    for (int i = 0; i < 20; i++)
        numero[i] = i;

    for (int j : numero) 
        cout << j << endl;

    int tamanho = sizeof(tamanho); // tamanho do array em bytes (4 inteiros e cada um tem 4 bytes) 4 * 4 = 16
    cout << tamanho << endl;
}