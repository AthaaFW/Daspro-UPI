#include <iostream>
using namespace std;
main(){
    char kode;
    cout<<"Masukan kode barang [A..C] : ";cin>>kode;
    switch(kode)
    {
    case 'A' :
        cout << "Alat Olahraga"; break;
    case 'B' :
        cout << "Alat Elektronik"; break;
    case 'C' :
        cout << "Alat Masak"; break;
    default :
        cout << "Anda Salah Memasukan Kode\n";
    }
    return 0;
}
