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
};

double Conta::depositar(double quantidade) {
        if (quantidade > 0) {
            saldo += quantidade;
        } else {
            cout << "erro: utilize apenas valores validos" << endl;
        }
        return saldo;
    }

int main() {
    Conta c = {1, 100.75};

    cout << "saldo = " << c.saldo << endl;
    
    cout << "saldo = " << c.depositar(150) << endl;
    
    cout << "saldo = " << c.retirar(200) << endl;
    return 0;
}