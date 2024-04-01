#include <iostream>

using namespace std;

int main() {
    int n = 1;

    while (n <= 100) {
        if (n % 2 != 0){
            n++;
            continue;
        }
        cout << n << endl;
        n++;
    }
}