#include <iostream>

using namespace std;

int main(){
    int bulat;
    bool angkaPrima = true;

    cout << "Masukan angka : "; cin >> bulat;

    if(bulat == 0 || bulat == 1){
        angkaPrima = false;
    }
    else{
        for(int i = 2; i <= bulat/2;i++){
            cout << i << " ";
            if(bulat % i == 0){
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
    
    return 0;
}