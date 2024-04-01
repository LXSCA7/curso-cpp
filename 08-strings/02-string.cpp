#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string nome = "lucas";

    int tamanho = nome.length();
    cout << tamanho << endl;
    
    if (isalpha(nome[0])) {
        cout << "e letra";
    } else {
        cout << "nao e letra";
    }
    return 0;
}
