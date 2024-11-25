#include <iostream>

using namespace std;

struct Buku{
    string judul;
    string pengarang;
    float harga;
};

int main(){
    Buku buku[5];
    float hargaTermahal = 0;
    int indexTermahal = 0;

    for(int i = 0; i < 5; i++){
        cout << "Masukan judul buku ke-" << i+1 << ": "; cin >> buku[i].judul;
        cout << "Masukan pengarang buku ke-" << i+1 << ": "; cin >> buku[i].pengarang;
        cout << "Masukan harga buku ke-" << i+1 <<": "; cin >> buku[i].harga;

        if(buku[i].harga > hargaTermahal){
            hargaTermahal = buku[i].harga;
            indexTermahal = i;
        }
    }

    cout << "\nBuku dengan harga termahal:\n";
    cout << "Judul: " << buku[indexTermahal].judul << endl;
    cout << "Pengarang: " << buku[indexTermahal].pengarang << endl;
    cout << "Harga: " << buku[indexTermahal].harga << endl;

    return 0;

}
