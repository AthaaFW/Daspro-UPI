#include <iostream>

using namespace std;

int main(){
    double jari, hasil;
    const double p = 3.1428;

    cout << "Masukan jumlah jari-jari = ";
    cin >> jari;
    hasil = jari*(jari*p);
    cout << "Luas lingkaran : " << hasil;

    return 0;
}
