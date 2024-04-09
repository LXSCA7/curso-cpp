#include <iostream>

using namespace std;

void bubbleSort(int lista[], int tamanho) {
    int num_temp;
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
    int lista[] = {5, 1, 2, 51, 9, 6, 27, 3, 13, 16, 12, 0, 25, 24, 47, 48, 94};

    int tamanho = sizeof(lista) / sizeof(lista[0]);

    cout << "lista desordenada: ";
    for (int i : lista)
         cout << i << " ";

    cout << endl;

    bubbleSort(lista, tamanho);

    cout << "lista ordenada: ";
    for (int j : lista)
        cout << j << " ";
}


