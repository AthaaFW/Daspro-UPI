#include <iostream>

using namespace std;

int main(){
    int a = 100;
    int *ptr = &a;

    cout << "Nilai a melalui pointer: " << *ptr << endl;

    return 0;
}