#include <iostream>
using namespace std;

int main()
{
    char ulangi = 'y';
    int counter = 0;

    do{
        cout << "Apakah kamu sayang dia?" << endl;
        cout << "Jawab (y/t): ";
        cin >> ulangi;

        counter++;
    } while (ulangi == 'y');

    cout << "\n\n--------\n";
    cout << "Kamu masih punya harapan!" << endl;
    cout << "Kamu berusaha sebanyak " << counter << " kali." << endl;

    return 0;
}