#include <iostream>

using namespace std;

double valorTransferir();
int contaTransferir();

class Conta {
public:
    int numero;
    double saldo;

    double depositar(double quantidade) {
        if (quantidade > 0)
            saldo += quantidade;

        return saldo;
    }

    double sacar(double quantidade) {
        if (quantidade > 0 && quantidade <= saldo)
            saldo -= quantidade;

        return saldo;
    }

    double pegaSaldo() {
        return saldo;
    }

    double transferencia(Conta &outra_conta, double quantidade) {
        if (saldo < quantidade) {
            cout << "voce nao tem esse valor na conta para realizar a transferencia" << endl;
            return saldo;
        }
        
        if (quantidade <= 0) {
            cout << "valor invalido" << endl;
            return saldo;
        }

        saldo -= quantidade;

        outra_conta.saldo += quantidade;

        return 0;
    }
};

int main() {

    int sua_conta, outra_conta;
    double valor;

    Conta contas[3];
    contas[0] = {1, 150.00};
    contas[1] = {2, 430.41};
    contas[2] = {3, 50.00};

    // cout << contas[0].pegaSaldo() << endl;
    // cout << contas[1].pegaSaldo() << endl;
    // cout << contas[2].pegaSaldo() << endl;

    cout << "BANCO BRABO"<< endl;

    cout << "insira o numero da sua conta: ";
    cin >> sua_conta;
    cout << "seu saldo = " << contas[sua_conta].pegaSaldo() << endl;

    if (sua_conta > 2 || sua_conta < 0) {
        cout << "valor nao encontrado.";
        return 1;
    }

    valor = valorTransferir();
    outra_conta = contaTransferir();

    // realizando a transferencia.
    contas[sua_conta].transferencia(contas[outra_conta], valor);


    cout << "seu saldo apos a transferencia: " << contas[sua_conta].pegaSaldo() << endl;
    cout << "outro saldo: " << contas[outra_conta].pegaSaldo() << endl;
}

double valorTransferir() {
    double valor;

    cout << "insira o valor da transferencia: ";
    cin >> valor;

    return valor;
}

int contaTransferir() {
    int outra_conta;

    cout << "insira a conta que deseja transferir: ";
    cin >> outra_conta;

    return outra_conta;
}