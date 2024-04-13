#include <iostream>
#include <cstring>
#define TOTAL_PRATOS 7

using namespace std;

char minusculas(char palavra[]);

class Prato {
public:
    char nome[100];
    double valor;
};

class Cliente {
public:
    int mesa;
    Prato *pratos_pedidos[TOTAL_PRATOS];

    double valor_total = 0;

    double pegaPrato(char nome[]) {
        for (int i = 0; i < TOTAL_PRATOS; i++) {
            if (strcmp(nome, pratos_pedidos[i]->nome) == 0) {
                char nome_do_prato[100];
                strcpy(nome_do_prato, pratos_pedidos[i]->nome);
                nome_do_prato[0] = toupper(nome_do_prato[0]);
                cout << "Pedido: " << nome_do_prato << " - R$ " << pratos_pedidos[i]->valor << endl << endl;
                valor_total += pratos_pedidos[i]->valor;
                return valor_total;
            }
        }
        cout << "Prato nao encontrado.\n";
        return valor_total;
    }

    void mostrarCardapio() {
        for (int i = 0; i < TOTAL_PRATOS; i++) {
            char nome_do_prato[100];
            strcpy(nome_do_prato, pratos_pedidos[i]->nome);
            nome_do_prato[0] = toupper(nome_do_prato[0]);
            cout << nome_do_prato << " - R$ " << pratos_pedidos[i]->valor << endl;
        }
        cout << "\n";
    }
};

int main(int argc, char const *argv[])
{
    char prato[100];
    char esc, cardapio;

    Prato pratos[] = {
        {"pizza", 19.99},
        {"hamburguer", 14.99},
        {"refrigerante", 4.99},
        {"sorvete", 10.00},
        {"milkshake", 7.99},
        {"batata", 4.49},
        {"frango", 15.5},
    };
    // 
    Cliente clientes;

    cout << "Insira sua mesa: ";
    cin >> clientes.mesa;
    cout << endl;

    // setando os pratos
    for (int i = 0; i < TOTAL_PRATOS; i++) {
        clientes.pratos_pedidos[i] = &pratos[i];
    }

    cout << "Ja conhece o cardapio? [S / N] ";
    cin >> cardapio;

    if (cardapio == 'N' || cardapio == 'n') {
        cout << endl;
        clientes.mostrarCardapio();
    }

    do {
        cout << "Faca seu pedido: ";
        cin >> prato;

        // transforma o prato inserido pra letras minusculas facilitando a comparacao
        for (int i = 0; i < strlen(prato); i++) {
            prato[i] = tolower(prato[i]);
        }

        clientes.pegaPrato(prato);

        cout << "deseja pedir mais algo? [S / N]: ";
        cin >> esc;
        cout << endl;
        
    } while (esc == 'S' || esc == 's');

    cout << "Valor total - R$ " << clientes.valor_total << "\n";
    return 0;
}