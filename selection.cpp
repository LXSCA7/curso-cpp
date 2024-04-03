#include <iostream>

using namespace std;

void selectionSort(int lista[], int tamanho) {
    int num_temp = 0;
    for (int i = 0; i < tamanho; i++) {
        int menor_num = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (lista[menor_num] > lista[j])
                menor_num = j;
        }

        if (menor_num != i) {
            num_temp = lista[i];
            lista[i] = lista[menor_num];
            lista[menor_num] = num_temp;
        }
    }
}

int main() {
    int lista[] = {4, 5, 1, 2, 3, 6, 8, 9, 10, -2, 77, -1, 0, 95, 27, 13, 12, 41, 24, 7, -3, -99, 99, 11};
    int tamanho = sizeof(lista) / sizeof(lista[0]);

    cout << "lista desordenada: ";
    for (int i : lista)
        cout << i << " ";

    selectionSort(lista, tamanho);

    cout << "\nlista ordenada: ";
    for (int j : lista)
        cout << j << " ";
    return 0;
}