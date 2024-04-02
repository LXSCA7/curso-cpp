#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    float nota[3];
    
    if (argc < 4) {
        cout << "erro: use ./02 [NOTA] [NOTA] [NOTA]";
        return 1;
    }

    for (int i = 1; i < argc; i++)
        nota[i - 1] = atof(argv[i]);

    for (int k : nota)
        if (k > 10 || k < 0) {
            cout << "erro: use apenas notas validas.\n[0 <= N <= 10]";
            return 1;
        }
    
    float media = (nota[0] + nota[1] + nota[2]) / 3.0;
    cout << "media do aluno: "<< media;
    return 0;
}