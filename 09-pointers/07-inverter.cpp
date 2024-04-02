#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char nome[5];

    cout << "nome: ";
    cin >> nome;

    int tamanho = strlen(nome);
    char *p = &nome[tamanho - 1];
    char *pini = &nome[0];


    for (int i = 0; i < tamanho; i++) {
        cout << *p;
        p--;
    } 

}