#include <iostream>

using namespace std;

void cekGenapGanjil(int angka) {
    if (angka % 2 == 0)
    cout << angka << " adalah genap." << endl;
    else
    cout << angka << " adalah ganjil." << endl;
}

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;

    cekGenapGanjil(angka);
    return 0;
}