#include <iostream>

using namespace std;

int main(){
    int x=0, y=0, a=0, b=0, c=0, d=0, e=0, f=0;

    cout << "Masukan Nilai X = "; cin >> x;
    cout << "Masukan Nilai Y = "; cin >> y;

    a=x+y;
    c=x%y;
    b=x-y;
    d=x*y;

    e=+x;
    f=-x;

    cout << "Hasil dari A = X + Y = "<< a << endl;
    cout << "Hasil dari B = X - Y = "<< b << endl;
    cout << "Hasil dari C = X % Y = "<< c << endl;
    cout << "Hasil dari D = X * Y = "<< d << endl;
    cout << "Hasil dari E = +X = "<< e << endl;
    cout << "Hasil dari F = -X = "<< f << endl;

    return 0;
}
