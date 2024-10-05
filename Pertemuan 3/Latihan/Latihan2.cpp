#include <iostream>
#include <conio.h>

using namespace std;
int main(){
    int uts, uas, tugas, hasil;
    string nilaiHuruf;
    cout << "Masukan Nilai UTS : ";cin>>uts;
    cout << "Masukan Nilai UAS : ";cin>>uas;
    cout << "Masukan Nilai Tugas : ";cin>>tugas;

    hasil = (uts*35/100)+(uas*45/100)+(tugas*20/100);

    switch (hasil) {
        case 85 ... 100:
            nilaiHuruf = "A";
            break;
        case 70 ... 84:
            nilaiHuruf = "B";
            break;
        case 55 ... 69:
            nilaiHuruf = "C";
            break;
        case 40 ... 54:
            nilaiHuruf = "D";
            break;
        default:
            nilaiHuruf = "E";
        break;
}

    cout << "Nilai akhir adalah : "<<hasil<<endl;
    cout << "Nilai huruf adalah : "<< nilaiHuruf<<endl;

    getch();
}
