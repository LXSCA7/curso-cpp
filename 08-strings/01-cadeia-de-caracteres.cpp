#include <iostream>

using namespace std;

void inverte(char nome[]) {
    int tamanho;
    for (tamanho = 0; nome[tamanho]; tamanho++); // pegar o tamanho

    // imprime invertido
    for (int i = tamanho - 1; i >= 0; i--)
    cout << nome[i];
}

int main(int argc, char const *argv[])
{
    char nome[] = "lucas";
    int i = 0;

    while (nome[i] != '\0')
        cout << nome[i++];

    cout << "\n";
    
    inverte(nome);
    return 0;
}
