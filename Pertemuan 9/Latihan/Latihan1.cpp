#include <iostream>

using namespace std;

void prima(int a){
    bool angkaPrima = true;

    if(a == 0 || a == 1){
        angkaPrima = false;
    }
    else{
        for(int i = 2; i <= a/2;i++){
            if(a % i == 0){
                angkaPrima = false;
                break;
            }
        }
    }

    if(angkaPrima){
        cout << "Angka yang diinput adalah angka prima";
    }else{
        cout << "Angka bukan prima";
    }

}

int main(){
    int Angka;
    
    cout << "Masukan angka : "; cin >> Angka;
    prima(Angka);

    return 0; 
}