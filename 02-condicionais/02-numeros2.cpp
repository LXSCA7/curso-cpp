#include <iostream>

using namespace std;

int main() {
    int num = 10;

    // é o mesmo codigo do anterior, mas sem uso das chaves.

    if (num > 10) 
        cout << "numero maior que 10";
    else if (num == 10) 
        cout << "numero igual a 10";
    else 
        cout << "numero menor que 10";
}