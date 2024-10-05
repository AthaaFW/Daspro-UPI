#include <iostream>

using namespace std;

int main(){
    string kalimat, cari; 
    size_t ketemu;
    int i;

    cout << "Masukan kalimat "; getline(cin, kalimat);
    do{
        cout << "Masukan karakter yang akan dicari (Exit untuk keluar) : "; cin >> cari;
        ketemu = kalimat.find(cari);
        cout << ketemu << endl;
    }while(cari != "Exit");

    
    return 0;

}