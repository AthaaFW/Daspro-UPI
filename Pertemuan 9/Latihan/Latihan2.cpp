#include <iostream>

using namespace std;

void rataRata(float a, float b, float c){
    float rata = (a+b+c)/3;

    cout << "Rata-rata adalah " << rata;
}

int main(){
    float a,b,c;

    cout << "Masukan angka desimal pertama : "; cin >> a;
    cout << "Masukan angka desimal kedua : "; cin >> b;
    cout << "Masukan angka desimal ketiga : "; cin >> c;

    rataRata(a,b,c);
    return 0;
}