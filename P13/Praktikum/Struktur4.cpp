#include <iostream>
#include <cmath>

using namespace std;

struct Lingkaran{
    float jariJari;
};
int main(){
    Lingkaran l;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> l.jariJari;

    float luas = M_PI*l.jariJari*l.jariJari;
    float keliling = 2*M_PI*l.jariJari;

    cout << "Luas lingkaran: "<<luas<<endl;
    cout << "Keliling lingkaran: "<<keliling<<endl;

    return 0;


}
