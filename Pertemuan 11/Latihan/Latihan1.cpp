#include <iostream>

using namespace std;

int main(){
    int size;
    int *arr = new int[size];
    int total = 0;

    cout << "Masukan jumlah elemen: "; cin >> size;

    for(int i = 1; i <= size; i++){
        cout << "Masukan elemen array: "; cin >> arr[i];
    }

    for(int i = 1; i <= size; i++){
        total += arr[i];
    }

    cout << "Jumlah elemen array: " << total;
    return 0;
}