#include <iostream>

using namespace std;

int main(){

    int num = 50;
    int*ptr = &num;

    *ptr = 100;

    cout << "Nilai num setelah diubah: "  << num << endl;

    return 0;
}