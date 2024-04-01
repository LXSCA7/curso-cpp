#include <iostream>

using namespace std;

int soma(int n1, int n2) {
    return n1 + n2;
}

int soma(int n1, int n2, int n3) {
    return n1 + n2 + n3;
}

int main() {
    cout << soma(1, 2) << endl;
    cout << soma(1, 2, 3) << endl;
}
