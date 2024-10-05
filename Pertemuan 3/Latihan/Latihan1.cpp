#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main(){
    int kode;
    string judul, harga, kodeDiskon;

    cout << "Masukan kode buku : "; cin >> kode;
    if(kode == 1){
        judul = "Kalkulus";
        cout << "Masukan kode diskon : "; cin >> kodeDiskon;
        if(kodeDiskon == "D"){
            harga = "Rp.45.000";
        } else{
            harga = "Rp.50.000";
        }
        cout<<"Kode buku = "<<kode<<endl;
        cout<<"Judul buku = "<<judul<<endl;
        cout<<"Harga buku = "<<harga<<endl;
    }else if(kode == 2){
        judul = "Pengantar Teknik Komputer";
        cout << "Masukan kode diskon : "; cin >> kodeDiskon;
        if(kodeDiskon == "D"){
            harga = "Rp.65.000";
        } else{
            harga = "Rp.70.000";
        }
        cout<<"Kode buku = "<<kode<<endl;
        cout<<"Judul buku = "<<judul<<endl;
        cout<<"Harga buku = "<<harga<<endl;
    }else{
        cout << "Kode buku salah";
    }
    getch();
}
