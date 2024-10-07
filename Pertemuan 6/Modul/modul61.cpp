#include <iostream>

using namespace std;
int main(){
    int nilai[5];
    nilai[0] = 6;
    nilai[4] = -2;

    nilai[3/2] = 2;
    nilai[2] = nilai[0];

    nilai[3] = nilai[1] + nilai[2];

    cout << "Element array nilai adalah sebagai berikut" << endl;
    cout << nilai[0] << " " << nilai[1] << " " << nilai[2] << " " << nilai[3] << " " << nilai [4];

    return 0;
}