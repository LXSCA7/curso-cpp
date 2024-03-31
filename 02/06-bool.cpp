#include <iostream>

using namespace std;

int main() {
    bool var = 20 > 10;
    bool var2 = 31 < 5;

    if (var) {
        cout << "verdadeiro";
    } else {
        cout << "falso";
    }

    cout << endl;

    if (!var2) {
        cout << "falso";
    } else {
        cout << "verdadeiro";
    }
    return 0;
}