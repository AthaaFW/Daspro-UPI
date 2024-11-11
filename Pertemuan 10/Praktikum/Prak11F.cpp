#include <iostream>

using namespace std;

bool Bilprima(int n){
    if(n<=1) return false;
    for(int i= 2; i<=n/2;i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int num;
    cout << "Masukan bilangan: ";cin >> num;
    if(Bilprima(num)){
        cout << num << " adalah bilangan prima"<<endl;
    }else{
        cout << num << " bukan bilangan prima"<<endl;
    }
    return 0;
}