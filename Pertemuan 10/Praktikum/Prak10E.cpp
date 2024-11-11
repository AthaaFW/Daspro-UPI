#include <iostream>

using namespace std;

void cetakDeret(int n){
    for(int i = 1; i<=n;i++){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    cetakDeret(10);
    return 0;
}