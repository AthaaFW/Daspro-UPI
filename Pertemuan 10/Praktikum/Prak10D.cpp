#include <iostream>

using namespace std;

int faktorial(int n){
    if(n<=1) return 1;
    return n*faktorial(n-1);
}

int main(){
    int angka;
    cout << "Masukan angka untuk menghitung faktorial: "; cin >> angka;
    cout << "Faktorial dari " << angka << "adalah: "<<faktorial(angka)<<endl;
    return 0;
}