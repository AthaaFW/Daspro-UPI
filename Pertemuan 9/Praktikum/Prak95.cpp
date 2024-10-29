#include <iostream>

using namespace std;

void terbesarDariTiga(int a, int b, int c){
    int terbesar = a;

    if (b > terbesar) terbesar = b;
    if (c > terbesar) terbesar = c;
    cout << "Bilangan terbesar: " << terbesar << endl;
}

int main() {
    int x, y, z;
    cout << "Masukkan tiga bilangan: ";
    cin >> x >> y >> z;

    terbesarDariTiga(x, y, z);
    return 0;
}