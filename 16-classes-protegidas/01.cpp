// classes protegidas

#include <iostream>
#include <cstring>

using namespace std;

class Linguagem {
private:
    char nome[100];

public:
    void mostrarNome() {
        cout << "Nome: " << nome << endl;
    }

    void setNome(const char *nome) {
        strcpy(this->nome, nome);
    }
};


int main(int argc, char const *argv[])
{
    Linguagem l;

    l.setNome("C++");
    l.mostrarNome();
    return 0;
}
