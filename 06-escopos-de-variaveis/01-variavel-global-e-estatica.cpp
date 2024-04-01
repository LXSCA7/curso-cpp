#include <iostream>

using namespace std;

int num_global = 12; 

void foo() {
    int num = 10;
    static int num_static = 1; // variavel nao é destruida quando a funcao é chamada de novo, ela fica gravada.
    cout << "variavel local: " << num << endl;
    cout << "variavel global: " << num_global << endl;
    num_static++;
    cout << "variavel estatica: " << num_static << endl;
}

int main() {
    // se eu colocasse 'cout << num << endl;' nao iria funcionar, pois 'num' nao é global.
    cout << num_global << endl;
    foo();
    cout << "---" << endl;
    foo();
    cout << "---" << endl;
    foo();
    return 0;
}