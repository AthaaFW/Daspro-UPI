#include <iostream>

using namespace std;

int main(){
    int x = 5;
    cout << "Increment ++x" << endl;
    cout << "x = " << x << endl;
    cout << "++x = " << ++x << endl;
    cout << "x = " << x << endl;
    x=5;
    cout << "Increment x++" << endl;
    cout << "x = " << x << endl;
    cout << "x++ = " << x++ << endl;
    cout << "x = " << x << endl;
    x=5;
    cout << "Decrement --x" << endl;
    cout << "x = " << x << endl;
    cout << "--x = " << --x << endl;
    cout << "x = " << x << endl;
    x=5;
    cout << "Decrement x--" << endl;
    cout << "x = " << x << endl;
    cout << "x-- = " << x-- << endl;
    cout << "x = " << x << endl;

    return 0;
}
