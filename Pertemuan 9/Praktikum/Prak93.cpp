#include <iostream>

using namespace std;

void hitungLuas(float panjang, float lebar){
    cout << "Luas Persegi Panjang: " << panjang * lebar << endl;
}
int main(){
    float panjang, lebar;
    cout << "Masukkan panjang: ";cin >> panjang;
    cout << "Masukkan lebar: ";cin >> lebar;

 hitungLuas(panjang, lebar);
 return 0;
}
