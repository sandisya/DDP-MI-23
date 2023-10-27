#include <iostream>
using namespace std;

void myFunction(){
    cout<<"i just got executed!"<<endl;;
}

void myFunction2(string name = "Sandi", int umur = 12){
    cout<<"Nama saya : "<<name<<" Umur saya :  "<<umur<<endl;
}
int myFunction3(int x){
    return 5 + x;
}
int main(){
    myFunction();
    myFunction();
    myFunction();
    
    myFunction2("Sandi");
    myFunction2("Andi", 12);
    myFunction2("Budi", 13);
    myFunction2("Charlie", 14);

    cout << myFunction3(17) << endl;
    cout << myFunction3(25) << endl;
    cout << myFunction3(30) << endl;

    int value1 = myFunction3(18);
    cout<<value1<<endl;
    return 0;
}