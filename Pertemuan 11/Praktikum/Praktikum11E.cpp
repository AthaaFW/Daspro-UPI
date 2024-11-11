#include <iostream>

using namespace std;

void tambahLima(int *num){
    *num += 5;
}

int main(){
    int value = 10;

    tambahLima(&value);

    cout << "Nilai setelah ditambah lima: " << value << endl;

    return 0;
}