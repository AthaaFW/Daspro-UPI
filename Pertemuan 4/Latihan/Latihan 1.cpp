#include <iostream>

using namespace std;

int main(){
    int data, rerata;
    int minggu = 1;
    int jumlah = 0;

    do{
        cout << "Masukan pengeluaran minggu ke "<< minggu <<": "; cin >> data;
        jumlah += data;
        minggu++;
    }while(minggu !=5);
        rerata = jumlah/4;
        cout << "Rata-rata pengeluaran uang bensin adalah : Rp."<<rerata;

        return 0;
}