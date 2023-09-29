#include <iostream>
using namespace std;

int main()
{
    int bil;
    cin >> bil;
    if (bil >= 0 && bil <= 9)
    {
        cout << "Satuan\n";
    }
    else if (bil >= 10 && bil <= 99)
    {
        cout << "Puluhan\n";
    }
    else if (bil >= 100 && bil <= 999)
    {
        cout << "Ratusan\n";
    }
    else
    {
        cout << "Tidak Tahu\n";
    }
}
