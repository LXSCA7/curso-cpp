#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "quantidade de argumentos: " << argc << endl;
    cout << "\nargumentos passados: " << endl;

    // for inicando em 1 para nao mostrar o argv que inicia o programa
    for (int i = 1; i < argc; i++) {
        cout << argv[i] << endl;
    }
    return 0;
}
