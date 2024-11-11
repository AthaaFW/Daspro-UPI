#include <iostream>

using namespace std;

int main(){
    int x = 25;
    int *ptr = &x;

    cout << "Alamat dari x: " << ptr << endl;
    cout << "Nilai dari x: " << *ptr << endl;

    return 0;
}