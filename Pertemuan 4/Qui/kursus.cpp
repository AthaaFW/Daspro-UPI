#include <iostream>
#include <string>

using namespace std;

int main(){
    string nama, alamat, kode_kursus, kode_diskon;
    int biaya;

    cout << "Masukan nama : ";cin >> nama;
    cout << "Masukan alamat : ";cin >> alamat;
    cout << "Masukan kode kursus : ";cin >> kode_kursus;

    if(kode_kursus == "KI"){
        cout << "Masukan kode diskon (Kosongkan jika tidak punya) : "; cin >> kode_diskon;
        if(kode_diskon == "D"){
        biaya = 1000000*0.70;
        }else{
        biaya = 1000000;
        }
        cout << "Nama : " << nama << endl;
        cout << "Alamat : " << alamat << endl;
        cout << "Kursus yang dipilih : Bahasa Inggris" << endl;
        cout << "Biaya kursus : Rp. " << biaya << endl;
    } else if(kode_kursus == "KJ"){
        cout << "Masukan kode diskon (Kosongkan jika tidak punya) : "; cin >> kode_diskon;
        if(kode_diskon == "D"){
        biaya = 2000000*0.70;
        }else{
        biaya = 2000000;
        }
        cout << "Nama : " << nama << endl;
        cout << "Alamat : " << alamat << endl;
        cout << "Kursus yang dipilih : Bahasa Jepang" << endl;
        cout << "Biaya kursus : Rp. "<< biaya << endl;
    } else if(kode_kursus == "KK"){
        cout << "Masukan kode diskon (Kosongkan jika tidak punya) : "; cin >> kode_diskon;
        if(kode_diskon == "D"){
        biaya = 1500000*0.70;
        }else{
        biaya = 1500000;
        }
        cout << "Nama : " << nama << endl;
        cout << "Alamat : " << alamat << endl;
        cout << "Kursus yang dipilih : Bahasa Korea" << endl;
        cout << "Biaya kursus : Rp. " << biaya << endl;
    } else{
        cout << "Kode yang anda masukan salah";
    }

    return 0;
    }