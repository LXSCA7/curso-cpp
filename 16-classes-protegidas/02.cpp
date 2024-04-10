// funcoes friends
// nao terminado.

#include <iostream>
#include <cstring>

using namespace std;

class Linguagem {
    friend void classeAmiga(Linguagem *l);
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

class LinguagemAmiga {
    friend class Linguagem;

protected:
    void mostrarAlgo() {
        cout << "ola, linguagem amiga!\n";
    }
};

void classeAmiga(Linguagem *l) { 
    cout << "classe amiga diz: " << l->nome << endl; 
}


int main(int argc, char const *argv[])
{
    Linguagem l;

    // LinguagemAmiga lamiga;

    // lamiga.setNome("java");
    // lamiga.mostrarNome();
    // classeAmiga(&lamiga);

    // nao funciona /\ pq Linguagem pode acessar LinguagemAmiga, mas nao é uma via de mao dupla.

    l.setNome("C++");
    l.mostrarNome();
    classeAmiga(&l);
    l.mostrarAlgo()
    
    return 0;
}
