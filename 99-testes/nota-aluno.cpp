#include <iostream>

using namespace std;

class Aluno {
private: 
    string nome_aluno;
    float nota_prova, nota_trabalho, nota_media;
    bool aprovado;

public:
    Aluno(string nome, float trabalho, float prova) {
        nome_aluno = nome;
        nota_trabalho = trabalho;
        nota_prova = prova;
        calculaNota();
        verificaSituacao();
    }

    void calculaNota() {
        nota_media = (nota_prova + nota_trabalho) / 2.0;
    }

    void verificaSituacao() {
        aprovado = (nota_media >= 6);
    }

    void imprimeDados() {
        cout << "nome do aluno: " << nome_aluno << endl;
        cout << "nota media: " << nota_media << endl;
        cout << "situacao do aluno: " << (aprovado ? "APROVADO" : "RECUPERACAO") << endl;
    }
};

int main() {
    string nome;
    float prova, trabalho;

    cout << "digite nome do aluno: ";
    cin >> nome;

    cout << "digite nota do trabalho: ";
    cin >> trabalho;

    cout << "digite nota da prova: ";
    cin >> prova;

    Aluno aluno(nome, trabalho, prova);

    cout << endl;

    cout << "dados do aluno: ";
    aluno.imprimeDados();
}