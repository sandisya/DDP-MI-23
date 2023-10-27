#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    
    if(a < 0){
        cout<<"Negatif";
    }else if(a %2==0){
        cout<<"Positif Genap";
    }else if(a %2==1){
        cout<<"Positif Ganjil";
    }
    return 0;
}