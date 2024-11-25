#include <iostream>
using namespace std;

struct Mahasiswa{
    string nama;
    int usia;
    string jurusan;
};

int main(){
    Mahasiswa mhs;
    cout << "Masukan nama: "; cin >> mhs.nama;
    cout << "Masukan usia: "; cin >> mhs.usia;
    cout << "Masukan jurusan: "; cin.getline(mhs.jurusan);

    cout << "\nData Mahasiswa\n";
    cout << "Nama: " << mhs.nama << endl;
    cout << "Usia: " << mhs.usia << endl;
    cout << "Jurusan: " << mhs.jurusan << endl;

    return 0;
}
