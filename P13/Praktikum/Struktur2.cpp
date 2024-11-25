#include <iostream>

using namespace std;

struct Nilai{
    float uts;
    float uas;
    float tugas;
};

int main(){
    Nilai n;
    cout << "MAsukan nilai UTS: "; cin >> n.uts;
    cout << "MAsukan nilai UAS: "; cin >> n.uas;
    cout << "Masukan nilai tugas: "; cin >> n.tugas;

    float rata = (n.uts + n.uas + n.tugas)/3;
    cout << "Nilai rata-rata: " << rata << endl;

    return 0;
}
