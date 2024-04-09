// continuacao do codigo anterior feito por conta propria
#include <iostream>
#define SEU_SALDO 1206.34

using namespace std;

class Conta {
public:
    int numero;
    double saldo;

    double depositar(double quantidade) {
        if (quantidade > 0) {
            saldo += quantidade;
        } else {
            cout << "erro: utilize apenas valores validos" << endl;
        }
        return saldo;
    }

    double retirar(double quantidade) {
        if (quantidade > 0 && saldo >= quantidade) 
            saldo -= quantidade;
        else 
            cout << "erro: voce nao possui esse valor na conta" << endl;
        return saldo;
    }
};

bool verificaEscolha(int opcao);

int main() {
    Conta c;

    int escolha;
    double valor;

    c.numero = 1;
    c.saldo = SEU_SALDO;

    cout << "[1] PARA DEPOSITAR" << endl;
    cout << "[2] PARA SACAR" << endl;
    cout << "[3] PARA VERIFICAR O SALDO" << endl;
    cout << "[4] PARA ENCERRAR O PROGRAMA" << endl;
    cout << "INSIRA SUA ESCOLHA: ";

    cin >> escolha;

    if (!verificaEscolha(escolha)) {
        cout << "OPCAO INVALIDA... \nENCERRANDO O PROGRAMA.";
        return 1;
    }

    switch (escolha) {
    case 1:
        cout << "INSIRA O VALOR DO DEPOSITO: ";
        cin >> valor;
        c.depositar(valor);
        cout << "NOVO SALDO: " << c.saldo << endl;
        break;
    case 2:
        cout << "INSIRA O VALOR DO SAQUE: ";
        cin >> valor;
        c.retirar(valor);
        cout << "NOVO SALDO: " << c.saldo << endl;
        break;
    case 3:
        cout << "SALDO DA CONTA: " << c.saldo << endl;
    }

    cout << "ENCERRANDO O PROGRAMA...";
    return 0;
}

bool verificaEscolha(int opcao) {
    if (opcao > 4 || opcao < 1)
        return false;

    return true;
}