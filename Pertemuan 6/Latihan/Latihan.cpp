#include <iostream>
#include <iomanip>
#include <typeinfo>
using namespace std;

main(){
    int i, s, k;
    char nama[5][20];
    int nilai[] = {};
    int nim[] = {};
    float avg, sum;
    int max = nilai[0];
    int position;

    cout << "Masukan jumlah mahasiswa: ";cin>>s;
    while(cin.fail()){
            cout << "Hanya masukan angka!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Masukan jumlah mahasiswa: ";
            cin>>s;
            cout << endl;
        }

    for(i=1;i<=s;i++){
        cout << "Nama mahasiswa: "; cin >> nama[i];
        cout << "Nim: "; cin>>nim[i]; 
         while(cin.fail()){
            cout << "Hanya masukan angka!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Masukan nim: ";
            cin>>nim[i];
            cout << endl;
        }
        cout << "Nilai: "; cin >> nilai[i];
         while(cin.fail()){
            cout << "Hanya masukan angka!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Masukan nilai: ";
            cin>>nilai[i];
            cout << endl;
        }
        cout << endl;

        sum += nilai[i];
    }


    for(int i = 1; i <= s; i++){
        if(nilai[i] > max){
            max = nilai[i];
            position = i;
        }
    }

    avg = sum/s;

    cout << "-----------------------------------------" << endl;
    cout << "List nilai mahasiswa" << endl;
    cout << "-----------------------------------------" << endl;

    for (i=1; i<=s; i++){
        cout << "Data Ke - " << i << endl;
        cout << "Nama: " << nama[i] << endl;
        cout << "Nim: " << nim[i] << endl;
        cout << "Nilai: "<<nilai[i] << endl << endl;
        // cout << setiosflags (ios::left) << setw (4) << i;
        // cout << setiosflags (ios::left) << setw (6) << nama[i];
        // cout << setprecision (2) << "          " << nim[i];
        // cout << setprecision (4) << "          " << nilai[i] << endl;
    }
    cout << "Rata-rata nilai: " << avg << endl;
    cout << "Nilai tertinggi: " <<  endl <<
    "Nama: " << nama[position] << endl <<
    "Nim: " << nim[position] << endl <<
    "Nilai: " << nilai[position] << endl;
    return 0;
}