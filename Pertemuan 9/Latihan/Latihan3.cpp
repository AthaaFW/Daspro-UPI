#include <iostream>

using namespace std;

void waktu(int jam, int menit, int detik){
    int jamDetik = jam*3600;
    int menitDetik = menit*60;

    int jumlahDetik = jamDetik + menitDetik + detik; 
    cout << "Jumlah detik adalah : " << jumlahDetik;
}

int main(){
    int jam, menit, detik;

    cout << "Masukan jam : "; cin >> jam; 
    cout << "Masukan menit : "; cin >> menit; 
    cout << "Masukan detik : "; cin >> detik;

    waktu(jam, menit, detik);
    return 0; 
}