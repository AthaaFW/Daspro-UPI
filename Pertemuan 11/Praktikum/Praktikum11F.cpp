#include <iostream>

using namespace std;

int panjangArray(int *arr){
    int length = 0;
    while(*arr != '\0'){
        length++;
        arr++;
    }
    return length;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int *ptr = arr;
    
    cout << "Panjang array: " << panjangArray(ptr) << endl;
    return 0;
}