#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

struct Mobil{
    string jenis;
    int tahun;
    long long int harga;
};

bool isNumber(const std::string& s)
{
    return std::any_of(s.begin(), s.end(), ::isdigit);
}

int main(){
    Mobil m;
    long long int pajak = 0;
    cout << "Masukan jenis mobil: "; getline(cin, m.jenis);
    if(isNumber(m.jenis) == true){
        do{
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Ulang :";
            getline(cin, m.jenis);
            isNumber(m.jenis);
        }while(isNumber(m.jenis) == true);

    cout << "Masukan tahun pembuatan: "; cin >> m.tahun;
    while(cin.fail()){
            cout << "Hanya masukan angka!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Masukan tahun: ";
            cin>>m.tahun;
            cout << endl;
    }
    cout << "Masukan harga: "; cin >> m.harga;
    while(cin.fail()){
            cout << "Hanya masukan angka!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Masukan harga: ";
            cin>>m.harga;
            cout << endl;
    }

    if(m.harga > 100000000){
        pajak =(m.harga*5)/100;
    }else{
        pajak =(m.harga*2)/100;
    }

    cout << "Jenis Mobil: " << m.jenis << endl;
    cout << "Tahun Pembuatan: " << m.tahun << endl;
    cout << "Harga Mobil: " << m.harga << endl;
    cout << "Pajak kendaraan: " << pajak;

    return 0;
}
}
