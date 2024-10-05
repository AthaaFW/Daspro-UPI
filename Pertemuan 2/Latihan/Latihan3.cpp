#include <iostream>

using namespace std;

int main(){
    float hargaAwal, hargaHitung, hargaAkhir,diskonInput, diskonHitung;

    cout << "Masukan harga = Rp."; cin >> hargaAwal;
    cout << "Masukan diskon (%) = "; cin >> diskonInput;
    diskonHitung = diskonInput/100;
    hargaHitung = hargaAwal*diskonHitung;
    hargaAkhir = hargaAwal-hargaHitung;
    cout << "Harga barang adalah = Rp." << hargaAkhir;

    return 0;
}
