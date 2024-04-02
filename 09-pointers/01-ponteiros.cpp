#include <iostream>

using namespace std;


/* alem das aulas do curso, usei o video do Augusto Galego pra conseguir entender melhor;
 * https://www.youtube.com/watch?v=k3xWL8i7-Mc 
 */ 

int main() {
    int x = 10;
    const int *y = &x;

    cout << "int x = 10;" << endl;
    cout << "const int *y = &x;\n" << endl;

    cout << "x = " << x << " ";
    cout << "y = " << *y << " \n\n";

    x = 20;
    cout << "x = 20\n\n";


    cout << "x = " << x << " ";
    cout << "y = " << *y << " \n" << endl;

    
    cout << "cout << \"y = \" << y << \" \" // printando sem o ponteiro (*)  \n";
    cout << "y = " << y << " // mostra o endereco de memoria. \n\n";

    x = 21;

    cout << "*y = " << *y << endl;
    cout << "y = " << y << endl;
    cout << "&y = " << &y << endl << endl;

    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;

    cout << "\no pointer *y aponta pro endereco de memoria de x '0x1b007ffe1c'.\n";
    cout << "quando ha alguma alteracao no endereco de '0x1b007ffe1c', o y tambem se altera e atribui esse valor. mesmo sendo uma constante\n";
    cout << "como no caso abaixo, aqui x = 21, portanto *y tambem.\n\n";

    cout << "*y = "<< *y << endl;
    cout << "atribuindo x = 6\n\n";

    x = 6;
    cout << "*y = " << *y << endl;
    

    return 0;
}