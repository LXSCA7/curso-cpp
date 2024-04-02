#include <iostream>

using namespace std;

class Contatos {
private:
    string nome_contato;
    string num_contato;
    string email_contato;

public: 
    void salvar(string nome, string numero, string email) {
        nome_contato = nome;
        num_contato = numero;
        email_contato = email;
    }

    void mostrarInfo() {
        cout << "nome do contato: " << nome_contato << endl;
        cout << "numero de telefone: " << num_contato << endl;
        cout << "email: " << email_contato << endl;
    }
};

int main(int argc, char const *argv[]) {
    string nome, numero, email;

    cout << "nome do contato: ";
    cin >> nome;
    cout << "numero de telefone: ";
    cin >> numero;
    cout << "email: ";
    cin >> email;

    Contatos contato;
    contato.salvar(nome, numero, email);

    cout << "dados salvos: ";
    contato.mostrarInfo();

    return 0;
}
