#include <iostream>

using namespace std;

int main()
{

    string nama[12];

    cin >> nama[0] >> nama[1] >> nama[2];
    cin >> nama[3] >> nama[4] >> nama[5];
    cin >> nama[6] >> nama[7] >> nama[8];
    cin >> nama[9] >> nama[10] >> nama[11];

    cout << nama[0] << " " << nama[3] << " " << nama[6] << " " << nama[9] << endl;
    cout << nama[1] << " " << nama[4] << " " << nama[7] << " " << nama[10] << endl;
    cout << nama[2] << " " << nama[5] << " " << nama[8] << " " << nama[11] << endl;

    return 0;
}