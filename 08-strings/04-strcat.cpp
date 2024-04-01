#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    char nome[100], sobrenome[100];

    cout << "insira seu nome: ";
    cin >> nome;
    cout << "insira seu sobrenome: ";
    cin >> sobrenome;

    strcat(nome, sobrenome);

    cout << "seu nome: " << nome << endl;
    
    return 0;
}
