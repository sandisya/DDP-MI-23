#include <iostream>
using namespace std;

int main()
{
    int s, r;
    cin >> s >> r;

    int matrix[s][r];

    for (int i = 0; i < s; i++){
        for (int j = 0; j < r; j++){
            cin >> matrix[i][j];
        }
    }
    for (int i = s - 1; i >= 0; i--){
        for (int j = r - 1; j >= 0; j--){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}