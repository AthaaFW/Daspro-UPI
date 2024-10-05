#include <iostream>

using namespace std;

int main(){
    string abstrakMakalah;

    cout << "Program Penghitung Jumlah Karakter Pada Abstrak Makalah" << endl;
    cout << "=======================================================" << endl;
    cout << "Masukan abstrak makalah : "; getline(cin, abstrakMakalah);

    cout << "Panjang karakter pada abstrak makalah adalah " << abstrakMakalah.size();

    return 0;
}