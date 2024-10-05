#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int pilihan = 0;
    do{
        cout <<"Menu pilihan :\n";
        cout <<"1. Baca Data\n";
        cout <<"2. Ubah Data\n";
        cout <<"3. Hapus Data\n";
        cout <<"4. Exit\n";
        cin >> pilihan;

        if(pilihan == 1){
            cout << "Anda memilih menu 1\n";
            cout << "Tekan enter untuk kembali ke menu utama";
            getch();
        } else if(pilihan == 2){
            cout << "Anda memilih menu 2\n";
            cout << "Tekan enter untuk kembali ke menu utama";
            getch();
        } else if(pilihan == 3){
            cout << "Anda memilih menu 3\n";
            cout << "Tekan enter untuk kembali ke menu utama";
            getch();
        } else if (pilihan == 4){
            system("exit");
        }
    }while(pilihan !=4);
}