#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int array[] = {1, 44, 3, 99, 5};
    int *parray = &array[0];
    int **pparray = &parray;

    cout << **pparray << endl;
 
    cout << *(parray + 1);

    return 0;
}
