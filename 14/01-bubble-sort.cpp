#include <iostream>
#include <cstring>
#include <string>
#define MAX 10

using namespace std;

class Carro {
public:
    char nome[100];
    char cor[20];
    char placa[20];
    double preco;
};

void bubbleSort(Carro carros[], int tamanho) {
    Carro temp;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (strcmp(carros[i].nome, carros[j].nome) == 1) {
                temp = carros[i];
                carros[i] = carros[j];
                carros[j] = temp;
            }
        }
    }
}

int main(int argc, char const *argv[]) {
    Carro carros[MAX];
    int i = 0;
    bool continuar = true;

    while (continuar) {
        char resp;
        cout << "nome do carro: ";
        cin >> carros[i].nome;
        cout << "digite o preco: ";
        cin >> carros[i].preco;
        cout << "deseja continuar? [S] SIM ou [N] nao: ";
        cin >> resp;
        if (resp != 's') {
            break;
            i++;
        }
        cout << "\n";
        i++;
    }

    cout << endl;
    
    cout << "exibindo todos os carros: ";
    for (int j = 0; j <= i; j++) {
        cout << "nome do carro: " << carros[j].nome << endl;
        cout << "preco: " << carros[j].preco << endl;
        cout << endl;
    }

    bubbleSort(carros, i);
    cout << "ordenando os carros pelo nome...";
    for (int j = 0; j <= i; j++) {
        cout << "nome do carro: " << carros[j].nome << endl;
        cout << "preco: "<< carros[j].preco << endl;
    }

    return 0;
}
