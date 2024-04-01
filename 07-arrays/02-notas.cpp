#include <iostream>

using namespace std;

int main() {
    float nota[3];

    for (float &i : nota) {
        do {
            cout << "insira nota: ";
            cin >> i;
            if (i > 10 || i < 0) {
                cout << "nota invalida. insira novamente." << endl;
            }
        } while (i > 10 || i < 0);
    }

    cout << "nota 1: " << nota[0] << endl;
    cout << "nota 2: " << nota[1] << endl;
    cout << "nota 3: " << nota[2] << endl;

    float media = (nota[0] + nota[1] + nota[2]) / 3;

    cout << "media: " << media << endl;

    if (media >= 6) {
        cout << "ALUNO APROVADO!" << endl;
        return 0;
    }

    cout << "ALUNO DE PRF";
    return 0;
}