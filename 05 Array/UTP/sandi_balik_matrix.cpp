#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    int matrix[a][b];
    
    for(int i= 0; i<a; i++){
        for(int j=0; j<b; j++){
            cin>>matrix[i][j];
        }
    }
        for(int i= a-1; i>=0; i--){
            for(int j =b-1; j>=0; j--){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
    }
    return 0;
}