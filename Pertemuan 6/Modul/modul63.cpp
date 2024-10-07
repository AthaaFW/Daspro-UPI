#include <iostream>
using namespace std;

int main(){
    string nama[100];
    int nilai[100];
    int no;

    cout << "Masukan jumlah mahasiswa :"; cin >> no;
    
    for(int i=1; i<=no;i++){
        cout << "Masukan nama mahasiswa :"; cin >> nama[i];
        cout << "Masukan nilai mahasiswa :"; cin >> nilai[i];
    }

    cout << "Tampilkan data" << endl;
    for(int a=1; a<= no;a++){
        cout << "Nama :"<< nama[a]<<" dengan nilai: "<<nilai[a]<<endl;    
    }
    return 0;
}