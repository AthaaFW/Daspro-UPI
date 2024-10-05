#include <iostream>

using namespace std;

int main(){
    float hasil, jari;

    const float p = 3.14;

    cout << "Masukan jumlah jari-jari= ";
    cin >> jari;

    hasil = (jari*p)*2;

    cout << "keliling dari lingkaran adalah " << hasil;

    return 0;
}
