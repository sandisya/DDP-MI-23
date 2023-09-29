#include <iostream>
using namespace std;

int main()
{
    int nilai;
    cin >> nilai;
    if (nilai % 2 == 0)
    {
        cout << "Genap";
    }
    else if (nilai % 2 == 1)
    {
        cout << "Ganjil";
    }
}