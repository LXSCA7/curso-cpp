#include <iostream>

using namespace std;

int main() {
    float nota1 = 5.5;
    float nota2 = 8;

    float media = (nota1 + nota2) / 2;

    if (media > 5) {
        cout << "aluno aprovado!";
    } else {
        cout << "aluno reprovado."; 
    }
    return 0;
}