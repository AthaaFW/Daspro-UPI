#include <iostream>

using namespace std;

int main(){
    int p,l,t,v;

    cout << "Masukan panjang balok : "; cin >> p;
    cout << "Masukan lebar balok : "; cin >> l;
    cout << "Masukan tinggi balok : "; cin >> t;

    v = p*l*t;

    cout << "Volume balok = " << v;

    return 0;
}
