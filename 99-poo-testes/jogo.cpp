#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Personagens {
public:
    int vida = 10;
    int pocao = 3;
    
    void dano(int valor) {
        if (vida > 0)
            if (valor % 2 == 0) {
                cout << "GOLPE CRITICO! " << endl;
                vida -= 5;
            }
        vida -= 2;
    }
    
    void cura() {
        vida += 2;
        pocao--;
    }
};

int main(int argc, char const *argv[])
{

    srand(time(NULL));
    Personagens player, inimigo;
    int valor;
    char esc;

    do {
        cout << "digite 1 para atacar: ";
        cin >> valor;
        cout << endl;

        int critico = rand() % 10;
        if (critico % 2 == 0)
                cout << "VOCE DEU UM ";
        inimigo.dano(critico); // player ataca
        critico = rand() % 10;
        if (critico % 2 == 0)
            cout << "VOCE RECEBEU UM ";
        player.dano(critico); // inimigo ataca
    
        cout << "Sua vida: " << player.vida << endl;
        cout << "Vida do inimigo: " << inimigo.vida << endl << endl;

        if (player.vida <= 0 || inimigo.vida <= 0) {
            break;
        }

        cout << "deseja se curar? (" << player.pocao << " POCOES DE CURA RESTANTES) [S / N] ";
        cin >> esc;
        cout << endl;

        if (esc == 'S' || esc == 's') {
            player.cura();
            cout << "Voce recuperou 2 de HP!" << endl << endl;
            }
    }   while (player.vida > 0 && inimigo.vida > 0);

    if (player.vida <= 0) {
        cout << "voce perdeu." << endl;
        return 0;
    }

    cout << "voce venceu!!" << endl;
    return 0;
}
