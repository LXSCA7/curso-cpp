#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    const int PROVAS = 3;
    float nota[3];

    for (int i = 0; i < PROVAS; i++) {
        cout << "insira nota " << i + 1 << ": ";
        cin >> nota[i];
    }

    float media = (nota[0] + nota[1] + nota[2]) / 3;

    cout << "media do aluno: " << media;

    return 0;
}

