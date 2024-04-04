#include <iostream>

using namespace std;

class Aluno {
private: 
    string nome_aluno;
    float nota_prova;
    float nota_trabalho;
    float nota_media;
    bool aprovado;

public:
    Aluno(float prova, float trabalho, string nome) {
        nome_aluno = nome;
        nota_prova = prova;
        nota_trabalho = trabalho;
        calcularMedia();
        verificarAprovacao();
    }

    void calcularMedia() {
        nota_media = (nota_prova + nota_trabalho) / 2.0;
    }

    void verificarAprovacao() {
        aprovado = (nota_media >= 6.0);
    }

    void mostrarInfo() {
        cout << "nome do aluno: " << nome_aluno << endl;
        cout << "nota da prova: " << nota_prova << endl;
        cout << "nota do trabalho: " << nota_trabalho << endl;
        cout << "nota media: " << nota_media << endl;
        cout << "situacao do aluno: " << (aprovado ? "APROVADO" : "RECUPERACAO") << endl;
    }
};



int main() {
    float nota_prova, nota_trabalho;
    string nome_aluno;

    cout << "insira o nome do aluno: ";
    cin >> nome_aluno;

    do {
        cout << "digite a nota da prova: ";
        cin >> nota_prova;
        if (nota_prova > 10 || nota_prova < 0) {
            cout << "nota invalida. insira novamente." << endl;
        }
    } while (nota_prova > 10 || nota_prova < 0);

    do {
        cout << "digite a nota do trabalho: ";
        cin >> nota_trabalho;
        if (nota_trabalho > 10 || nota_trabalho < 0) {
            cout << "nota invalida. insira novamente.";
        }
    } while (nota_trabalho > 10 || nota_trabalho < 0);

    Aluno aluno(nota_prova, nota_trabalho, nome_aluno);

    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
    cout << "dados aluno: " << endl;
    aluno.mostrarInfo();

    return 0;
}