#include <iostream>
#include <string>

using namespace std;

typedef struct {
    string nome;
    int idade;
} t_pessoa;

int main() {
    t_pessoa p[3];

    p[0].nome = "lucas";
    p[0].idade = 18;

    p[1].nome = "carlos";
    p[1].idade = 25;

    p[2].nome = "duda";
    p[2].idade = 18;

    for (int i = 0; i < 3; i++) {
        cout << "nome: " << p[i].nome << endl;
    cout << "idade: " << p[i].idade << endl;
    }

    // t_pessoa *pessoa;
    // p->idade = 26;

    // cout << p->idade;

    return 0;
}