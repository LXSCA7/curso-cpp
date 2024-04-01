#include <iostream>

using namespace std;

int main() {
    int num1, num2, resultado;
    char op;

    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;
    cout << "Digite a operacao: ";
    cin >> op;

    switch (op) {
        case '+': 
            resultado = num1 + num2;
            break;
        

        case '-': 
            resultado = num1 - num2;
            break;
        
        case '/': 
            resultado = (float)num1 / num2;
            break;
        

        case '*': 
            resultado = num1 * num2;
            break;
        
        default:
            cout << "entrada invalida";
            return 0;
    }

    cout << "resultado = " << resultado << endl;
}