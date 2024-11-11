#include <iostream>

using namespace std;

void cetakJumlah(int a, int b){
    int hasil = a+b;
    cout << "Hasil penjumlahan "<<a<<" dan "<<b<<" adalah: " << hasil << endl;
}

int main(){
    cetakJumlah(5,7);
    return 0;
}