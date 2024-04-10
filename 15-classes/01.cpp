#include <iostream>

using namespace std;

class Conta {
public:
    int numero;
    double saldo;

    double depositar(double quantidade);

    double retirar(double quantidade) {
        if (quantidade > 0 && saldo >= quantidade) 
            saldo -= quantidade;
        else 
            cout << "erro: voce nao possui esse valor na conta" << endl;
        return saldo;
    }

    double getSaldo() {
        return saldo;
    }
};

double Conta::depositar(double quantidade) {
        if (quantidade > 0) {
            saldo += quantidade;
        } else {
            cout << "erro: utilize apenas valores validos" << endl;
        }
        return saldo;
    }

Conta *novaConta(int numero) {
    Conta *c = new Conta;
    c-> numero = numero;
    c-> saldo = 0.0;
    return c;
}

int main() {
    Conta *c = novaConta(1111);

    c-> depositar(1000);
    cout << "depositando 1000" << endl;
    cout << "saldo: " << c->getSaldo();
    return 0;
}