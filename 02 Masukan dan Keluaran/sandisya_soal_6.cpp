#include <iostream>

using namespace std;

int main()
{
    int value1, value2;
    cin >> value1 >> value2;

    int pembagian = value1 / value2;
    int sisa_bagi = value1 % value2;

    cout << "masing-masing " << pembagian << endl;
    cout << "bersisa " << sisa_bagi << endl;

    return 0;
}