#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int tinggi;

    cout << "Masukan tinggi segitiga : ";cin >> tinggi;
    cout << endl << "Segitiga siku-siku dengan tinggi " << tinggi << endl;

    for(int a=1; a<=tinggi;a++){
        for(int b=1; b<=a; b++){
            cout << "*";
        }
        cout << endl;
    }

    getch();
}