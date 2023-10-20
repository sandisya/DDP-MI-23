#include <iostream>
using namespace std;

int main()
{
    int bil;
    cin >> bil;

    if (bil < 0){
        cout << "Negatif\n";
    }else if (bil % 2 == 0){
        cout << "Positif Genap\n";
    }else{
        cout << "Positif Ganjil\n";
    }
    return 0;
}