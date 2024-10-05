#include <iostream>
#include <conio.h>

using namespace std;
int main(){
    int awal, akhir;

    cout << "Masukan nilai awal bilangan : ";cin >> awal;
    cout << "Masukan nilai akhir bilangan : "; cin >> akhir;

    cout << endl << "Menampilkan bilangan genap dari " << awal << " hingga " << akhir << endl;
    while(awal <= akhir){
        if(awal % 2 == 0){
            cout << awal << endl;
        }

        awal++;
    }
    getch();
}