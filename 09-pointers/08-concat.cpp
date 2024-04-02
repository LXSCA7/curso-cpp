#include <iostream>

using namespace std;

int my_strlen(char * str) {
    int tam = 0;

    while (*str != '\0') {
        str++;
        tam++;
    }
    return tam;
}

char *my_srtcat(char * dest, char * orig) {
    char *resultado;
    int tam_dest = my_strlen(dest);
    int tam_orig = my_strlen(orig);

    resultado = new char[tam_dest + tam_orig];
    char *p = resultado;
    while (*dest != '\0') {
        *p = *dest;
        p++;
        dest++;
    }
    while (*orig != '\0') {
        *p = *orig;
        p++;
        orig++;
    }
    *p = '\0';
    return resultado;
}

int main(int argc, char const *argv[])
{
    char *nome1 = new char[100];
    char *nome2 = new char[100];

    cout << "digite nome 1: ";
    cin >> nome1;
    
    cout << "digite nome 2: ";
    cin >> nome2;

    resultado = my_srtcat(nome1, nome2);

    cout << resultado;
    
    return 0;
}
