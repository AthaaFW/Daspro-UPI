#include <iostream>

using namespace std;

int main(){
    int a=10, b=11;
    int hasilAND, hasilOR, hasilXOR, hasilNOT, hasilSHL, hasilSHR;

    hasilAND = a&b;
    hasilOR = a|b;
    hasilXOR = a^b;
    hasilNOT = ~a;
    hasilSHL = a << 1;
    hasilSHR = a >> 1;

    cout << hasilAND << endl;
    cout << hasilOR << endl;
    cout << hasilXOR << endl;
    cout << hasilNOT << endl;
    cout << hasilSHL << endl;
    cout << hasilSHR << endl;

    return 0;
}
