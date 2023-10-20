#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    getchar();

    string ar[n];

    for (int i = 0; i < n; i++){
        getline(cin, ar[i]);
    }
    for (int i = n - 1; i >= 0; i--){
        cout << ar[i] << endl;
    }
    return 0;
}