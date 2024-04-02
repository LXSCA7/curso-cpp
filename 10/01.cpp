#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x = 10;
    const int *y = &x;

    cout << *y << endl;
    x = 20;

    cout << *y << endl;
}
