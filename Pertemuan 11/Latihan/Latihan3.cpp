#include <iostream>

using namespace std;

int main(){
    int size;

    cout << "Masukan jumlah elemen array : "; cin >> size;

    int *arr = new int[size];

    cout << "Masukan elemen array "<< endl;
    cout << "============================"<< endl;
    for(int i = 0; i < size; i++){
        cout << "Masukan elemen ke- " << i + 1 << " : "; cin >> arr[i];
    }

    for(int i= 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] < arr[j+1]){
                int n = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = n;
            }
        }
    }


    cout << "Array menurun: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}