#include <iostream>
using namespace std;

int main()
{
    string ss;
    getline(cin, ss);
    for (int i = ss.length() - 1; i >= 0; i--){
        cout << ss[i];
    }
    return 0;
}