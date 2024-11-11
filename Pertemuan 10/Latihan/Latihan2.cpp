#include <iostream>

using namespace std;

bool isGanjil(int n){
    if(n%2 == 0){
        return false;
    }else{
        return true;
    }
}

int main(){
    int num;
    cout << "Masukan angka: "; cin >> num;
    if(isGanjil(num)){
        cout << num <<" adalah angka ganjil";
    }else{
        cout << num <<" adalah angka genap";
    }
}