#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int var = 10;
    int* pvar; // ponteiro

    pvar = &var;
    *pvar = 20;

    cout << *pvar << endl;
    cout << var << endl;
     

    return 0;
}
