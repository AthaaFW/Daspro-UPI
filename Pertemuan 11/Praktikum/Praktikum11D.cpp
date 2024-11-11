#include <iostream>

using namespace std;

int main(){

    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    cout << "Elemen pertama array: " << *ptr << endl;
    ptr++;

    cout << "Elemen kedua array: " << *ptr << endl;

    return 0;
}