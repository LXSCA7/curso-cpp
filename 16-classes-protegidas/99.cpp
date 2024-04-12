#include <iostream>

using namespace std;

// functions
bool checaConta(int numero);

// class

class Conta {
public:
    int numero;
    double saldo;
    
private: 

};

int main(int argc, char const *argv[]) {
    cout << "BANCO" << endl;

    Conta contas[3];

    contas[0] = {1, 1540.31};
    contas[1] = {2,  742.55};
    contas[2] = {3,  653.12};

    int conta_user;
    cout << "insira o numero da sua conta: ";
    cin >> conta_user;

    if (!checaConta(conta_user)) {
        cout << "conta nao registrada.";
        return 1;
    }

    mostrarSaldo(conta_user);

    return 0;
}

bool checaConta(int numero) {
    if (numero < 0 || numero > 2) {
        return false;
    }

    return true;
}