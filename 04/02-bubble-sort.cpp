#include <iostream>

using namespace std;

void bubbleSort(int lista[], int tamanho) {
    int num_temp = 0;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (lista[i] > lista[j]) {
                num_temp = lista[i];
                lista[i] = lista[j];
                lista[j] = num_temp;
            }
        }
    }
}

int main() {
    int lista[] = {98, 15, 12, 16, 27, 6, 24, 20, 99, 0, 13, 3, 8, 941};
    int tamanho = sizeof(lista) / sizeof(lista[0]);

    cout << "lista nao ordenada: ";
    for (int i : lista) {
        cout << i << " "; 
    }

    cout << endl;

    bubbleSort(lista, tamanho);

    cout << "lista ordenada: ";
    for (int j : lista) {
        cout << j << " ";
    }
}