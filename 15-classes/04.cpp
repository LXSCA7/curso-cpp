// classes protegidas

#include <iostream>
#include <cstring>

using namespace std;

class Linguagem {
protected:
    char nome[100];

public:
    char getNome() {
        return nome;
    }
};


int main(int argc, char const *argv[])
{
    Linguagem l;

    strcpy(l.nome, "c++");

    cout << "nome = " << l.nome << endl;
    return 0;
}
