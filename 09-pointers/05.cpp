#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int array[] = {1, 2, 3, 99, 5};
    int *parray = &array[0];
    int i = 0;

    cout << *parray << endl << endl;

    while (i < 5) {
        cout << *parray << endl;

        parray++; // nesse caso, parray nao esta aumentando uma unidade (1.. 2.. 3...) e sim indo pro prox elemento do array, 
        i++;
    }
    return 0;
}
