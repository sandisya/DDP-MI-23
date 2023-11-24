#include <iostream>
using namespace std;

int main(){
    int n, cari;
    bool ketemu = false;

    //menentukan panjang array
    cout << "Input jumlah data:  ";
    cin >> n;

    //memasukan nilai ke dalam array
    int list_data[n];
    for (int i = 0; i < n; i++){
        cout << "Input data ke-" << i << ": ";
        cin >> list_data[i];
    }
    cout << endl;

    //menentukan nilai yang ingin dicari
    cout << "Input bilangan yang dicari: ";
    cin >> cari;
    cout << endl;

    //mencari dengan sequential search
    for(int i = 0; i < n; i++){
        if(list_data[i] == cari){
            ketemu = true;
            cout << "Data ditemukan pada index ke-"<<i;
        }
    }
    if(!ketemu)
    cout << "Data tidak ditemukan";
}