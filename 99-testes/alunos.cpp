#include <iostream>

using namespace std;

void mostrarAlunos();

class Aluno {
public:
    string nome;
    int matricula, turma;
    float nota_prova, nota_trabalho;

    float nota_media = pegaMedia(nota_trabalho, nota_prova);
    bool aprovado = verificaAprovacao(nota_media);
 
    void mostrarAlunos(int i) {
        cout << "[" << i << "] ";
        cout << "NOME: " << nome << endl;
        cout << "MATRICULA: " << matricula << endl;
    }

    void infoAluno() {
        cout << "dados: " << endl;
        cout << "aluno: " << nome << endl; 
        cout << "matricula: " << matricula << endl; 
        cout << "turma: " << turma << endl; 
        cout << "nota media: " << nota_media << endl;
        cout << "situacao: " << (aprovado ? "aprovado" : "reprovado") << endl << endl;
    }

    float pegaMedia(float trabalho, float prova) {
        float media = (trabalho + prova) / 2.0;
        return media;
    }

    bool verificaAprovacao(float media) {
        if (media >= 6)
            return true;

        return false;
    }

    void registraAluno() {
        cout << "INSIRA O NOME DO ALUNO: ";
        cin >> nome;
        cout << "INSIRA A MATRICULA: ";
        cin >> matricula;
        cout << "INSIRA A TURMA: ";
        cin >> turma;
        cout << "INSIRA A NOTA DO TRABALHO: ";
        cin >> nota_trabalho;
        cout << "INSIRA A NOTA DA PROVA: ";
        cin >> nota_prova;

        nota_media = pegaMedia(nota_trabalho, nota_prova);
        aprovado = verificaAprovacao(nota_media);
    }    
};

int main() {
    
    Aluno alunos[6];
    alunos[0] = {"Lucas", 621, 309, 8.7, 10};
    alunos[1] = {"Claudio", 051, 208, 6.5, 8.4};
    alunos[2] = {"Duda", 567, 307, 9.5, 9};
    alunos[3] = {"Luiz", 145, 104, 6.8, 7.7};
    alunos[4] = {"Alberto", 650, 208, 5.4, 4.5};

    int escolha;
    cout << "[1] PARA VERIFICAR SITUACAO DE ALGUM ALUNO" << endl << "[2] PARA REGISTRAR UM ALUNO NOVO NO SISTEMA" << endl << "ENTRADA: ";
    cin >> escolha;

    switch (escolha) {
        case 1: 
            int num_aluno;
            cout << "LISTA DE ALUNOS: " << endl;
            for (int i = 0; i < 5; i++) {
                cout << endl;
                alunos[i].mostrarAlunos(i);
            }
            cout << "\nINSIRA O NUMERO PARA O ALUNO DESEJADO: ";
            cin >> num_aluno;
            cout << "\n";

            alunos[num_aluno].infoAluno();

            return 0;

            break;
        case 2:
            alunos[5].registraAluno();
            for (int j = 0; j < 6; j++) {
                alunos[j].infoAluno();
            }

            return 0;
            break;
        default:
            cout << "opcao invalida.";
            return 1;
    }
}