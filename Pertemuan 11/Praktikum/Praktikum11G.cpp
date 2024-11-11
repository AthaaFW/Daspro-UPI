#include <iostream>

using namespace std;

int main(){
    char str[] = "Hello";
    char *ptr = str;

    cout << "Karakter pertama: " << *ptr << endl;
    ptr++;
    cout << "Karakter kedua: " << *ptr << endl;

    return 0;
}