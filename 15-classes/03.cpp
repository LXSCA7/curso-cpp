#include <cstring>
#include <iostream>

using namespace std;

double valorTransferir();
int contaTransferir();
bool checaConta(int conta);

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

int main(int argc, char const *argv[]) {

    int sua_conta, outra_conta;
    double valor;

    Conta contas[3];
    contas[0] = {1, 150.00};
    contas[1] = {2, 430.41};
    contas[2] = {3, 50.00};

    if (argc > 1) {
        cout << "contas: " << endl;
        for (int i = 0; i < 3; i++) {
            cout << "CONTA " << i << endl;
            cout << "saldo: " << contas[i].pegaSaldo() << endl << endl;
        }
        return 0;
    }

    cout << "BANCO BRABO"<< endl;

    cout << "insira o numero da sua conta: ";
    cin >> sua_conta;

    if (!checaConta(sua_conta)) {
        cout << "conta nao encontrada.";
        return 1;
    }

    cout << "seu saldo = " << contas[sua_conta].pegaSaldo() << endl;
    valor = valorTransferir();
    outra_conta = contaTransferir();

    if (!checaConta(outra_conta)) {
        cout << "conta nao encontrada.";
        return 1;
    }

    // realizando a transferencia.
    contas[sua_conta].transferencia(contas[outra_conta], valor);

    cout << "\nTRANSFERENCIA REALIZADA\n\n";
    cout << "seu saldo apos a transferencia: " << contas[sua_conta].pegaSaldo() << endl;
    cout << "outro saldo: " << contas[outra_conta].pegaSaldo() << endl;
}

bool checaConta(int conta) {
    if (conta > 2 || conta < 0)
        return false;

    return true;
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