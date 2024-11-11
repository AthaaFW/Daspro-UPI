#include <iostream>

using namespace std;

int hitungModulus(int a, int b){
    return a%b;
}

int main(){
    int num1, num2, pil;
    cout << "Masukan nilai A: "; cin >> num1;
    cout << "Masukan nilai B: "; cin >> num2;
    cout << "Hasil modulus: " << hitungModulus(num1, num2);
    
    return 0;
}