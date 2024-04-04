#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Pessoa {
public:
    string nome;
    string cpf;
    int idade;
};

int getIdade(Pessoa usuario[], string nome) {
    int tamanho = sizeof(usuario) / sizeof (Pessoa);

    for (int i = 0; i < tamanho; i++) {
        if (strcmp(nome, usuario[i]) == 0)
            return usuario[i].idade;
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    Pessoa usuario[3] {
        {"lucas", "204.705.127-41", 18}, 
        {"aline", "093.233.607-83", 41},
        {"ana caroline", "204.705.327-77", 15},
    };

    for (int i = 0; i < 3; i++) {
        cout << usuario[i].nome << endl;
        cout << usuario[i].cpf << endl;
        cout << usuario[i].idade << endl;
    }

    int idade = getIdade(pessoas, "lucas");

    if (idade != -1) {
        cout << "Idade do lucas: " << idade
    }
    return 0;
}
