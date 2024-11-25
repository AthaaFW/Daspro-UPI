#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

struct Gaji{
    long long int pokok;
    long long int tunjangan;
    long long int total;
};

struct Karyawan{
    string nama;
    string jabatan;
    Gaji gaji;
};

bool isNumber(const std::string& s)
{
    return std::any_of(s.begin(), s.end(), ::isdigit);
}

int main(){
    Karyawan kar;
    cout << "Masukan nama karyawan: "; getline(cin, kar.nama);
    if(isNumber(kar.nama) == true){
        do{
            cout << "Tidak boleh ada angka!";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Ulang :";
            getline(cin, kar.nama);
            isNumber(kar.nama);
        }while(isNumber(kar.nama) == true);
    }
    cout << "Masukan jabatan karyawan: "; cin >> kar.jabatan;
    if(isNumber(kar.jabatan) == true){
        do{
            cout << "Tidak boleh ada angka!";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Ulang :";
            getline(cin, kar.jabatan);
            isNumber(kar.jabatan);
        }while(isNumber(kar.jabatan) == true);
    }
    cout << "Masukan gaji pokok: "; cin >> kar.gaji.pokok;
    while(cin.fail()){
            cout << "Hanya masukan angka!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Masukan gaji pokok: ";
            cin>>kar.gaji.pokok;
            cout << endl;
    }

    if(kar.jabatan == "Manager"){
        kar.gaji.tunjangan = (kar.gaji.pokok*20)/100;
    }else if(kar.jabatan == "Staff"){
        kar.gaji.tunjangan = (kar.gaji.pokok*10)/100;
    }else if(kar.jabatan == "Intern"){
        kar.gaji.tunjangan = (kar.gaji.pokok*5)/100;
    }else{
        kar.gaji.tunjangan = 0;
    }

    kar.gaji.total = kar.gaji.pokok+kar.gaji.tunjangan;

    cout << "Nama: " << kar.nama << endl;
    cout << "Jabatan: " << kar.jabatan << endl;
    cout << "Gaji Pokok: " << kar.gaji.pokok << endl;
    cout << "Tunjangan: " << kar.gaji.tunjangan << endl;
    cout << "Total Gaji: " << kar.gaji.total<< endl;
    if(kar.gaji.tunjangan == 0){
        cout << "Jika anda tidak mendapat tunjangan, mungkin ada kesalahan input pada jabatan atau jabatan yang anda masukan tidak tersedia!";
    }

    return 0;
}
