#include <iostream>

using namespace std;

int main(){
    int size1, size2;
    bool sama = false;
    cout << "Masukan jumlah elemen array pertama: "; cin >> size1;
    cout << "Masukan jumlah elemen array kedua: "; cin >> size2;

    int *arr1 = new int[size1];
    int *arr2 = new int[size2];

    cout << "Masukan elemen array pertama "<< endl;
    cout << "============================ "<< endl;
    for(int i = 0; i < size1; i++){
        cout << "Masukan elemen ke- " << i + 1 << " : "; cin >> arr1[i];
    }
    cout << "============================ "<< endl;

    cout << "Masukan elemen array kedua "<< endl;
    cout << "============================ "<< endl;
    for(int i = 0; i < size2; i++){
        cout << "Masukan elemen ke- " << i + 1 << " : "; cin >> arr2[i];
    }
    cout << "============================ "<< endl;

    cout << "Angka yang sama: ";
    for(int i = 0; i < size1; i++){
        int *ptr1 = arr1 + i;

        for(int j = 0; j < size2; j++){
            int *ptr2 = arr2 + j;

            if(*ptr1 == *ptr2){
                cout << *ptr1 << " ";
                sama = true;
                break;
            }
        }
    }

    if(!sama){
        cout << "Tidak ada";
    }

    delete[] arr1;
    delete[] arr2;

    return 0;
}