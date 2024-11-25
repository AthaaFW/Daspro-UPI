#include <iostream>

using namespace std;

struct Buku{
string judul;
string pengarang;
float harga;
};

int main(){
    Buku b1 = {"Pemograman C++", "Munawir", 150000};
    cout << "Judul: " << b1.judul << endl;
    cout << "Pengarang: " << b1.pengarang << endl;
    cout << "Harga: " << b1.harga << endl;

    return 0;
}
