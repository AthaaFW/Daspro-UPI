#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(){

    string kata;
    cout << "Masukan kata = BELAJAR" << endl;
    cin >> kata;

    if (kata=="BELAJAR"){
        cout << "Kata yang dimasukan sesuai" << endl;
    }else {
        cout << "Kata yang dimasukan tidak sesuai" << endl;
    }
    getch();
}
