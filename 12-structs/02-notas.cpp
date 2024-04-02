#include <iostream>
#include <string>

using namespace std;

typedef struct {
    string nome;
    float nota_trabalho,nota_prova, nota_media;
    bool aprovado;
} info_aluno;

int main(int argc, char const *argv[]) {
    info_aluno aluno[2];
    const int MAX_ALUNOS = 2;

    for (int i = 0; i < MAX_ALUNOS; i++) {
        
        cout << "insira nome do aluno: ";
        cin >> aluno[i].nome;
        cout << "insira nota do trabalho: ";
        cin >> aluno[i].nota_trabalho;
        cout << "insira nota da prova: ";
        cin >> aluno[i].nota_prova;

        aluno[i].nota_media = (aluno[i].nota_prova + aluno[i].nota_trabalho) / 2;

        if (aluno[i].nota_media > 5) {
            aluno[i].aprovado = true;
        } else {
            aluno[i].aprovado = false;
        }
        cout << "--------\n\n";
    }

    cout << "--------\n\n";

    for (int j = 0; j < MAX_ALUNOS; j++) {
        cout << "nome: " << aluno[j].nome << endl;
        cout << "nota media: " << aluno[j].nota_media << endl;
        if (aluno[j].aprovado) {
            cout << "situacao do aluno: APROVADO" << endl;
        } else {
            cout << "situacao do aluno: REPROVADO" << endl;
        }
        cout << "--------\n\n";
    }
    return 0;   
}
