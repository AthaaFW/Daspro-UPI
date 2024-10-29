#include <iostream>

using namespace std;

int main(){
    int bil[7];

    for(int i = 0; i < 7; i++){
        cout << "Masukan angka ke-" << i+1 <<" : "; cin >> bil[i];
    }
    cout << endl;
    for(int j = 6; j >= 0; j--){
        cout << bil[j];
    }

    return 0;
}