#include <iostream>
using namespace std;

int main()
{
    int s, r;
    cin >> s >> r;
    for (int d = s; d >= r; d--)
    {
        cout << d << " " << endl;
    }
    return 0;
}