#include <iostream>

using namespace std;

int globalVar = 100;

void tampilkanGlobal(){
    cout << "Nilai variabel global: " << globalVar << endl;
}

int main(){
    int localVar = 50;
    cout << "Nilai lokal di main(): " << localVar << endl;
    tampilkanGlobal();
    return 0;
}