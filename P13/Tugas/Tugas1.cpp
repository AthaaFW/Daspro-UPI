#include <iostream>

using namespace std;

struct PersegiPanjang{
    int panjang;
    int lebar;
};

int main(){
    PersegiPanjang pp;

    cout << "Masukan panjang: "; cin >> pp.panjang;
    while(cin.fail()){
            cout << "Hanya masukan angka!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Masukan panjang: ";
            cin>>pp.panjang;
            cout << endl;
    }
    cout << "Masukan lebar: "; cin >> pp.lebar;
    while(cin.fail()){
            cout << "Hanya masukan angka!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Masukan lebar: ";
            cin>>pp.lebar;
            cout << endl;
    }

    int luas = pp.panjang*pp.lebar;
    int keliling = 2*(pp.panjang+pp.lebar);

    cout << "Luas persegi panjang: " << luas << endl;
    cout << "Keliling persegi panjang: " << keliling << endl;

    return 0;

}
