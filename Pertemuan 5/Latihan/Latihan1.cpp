#include <iostream>

using namespace std;

int main(){
    string var1, var2, var3;

    cout << "Masukan teks 1 : "; getline(cin, var1);
    cout << "Masukan teks 2 : "; getline(cin, var2);

    var3 = var1 + var2;

    cout << var3;

    return 0;
}