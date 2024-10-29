#include <iostream>

using namespace std;

int main(){
    int bil;

    do{
        cout << "Masukan bilangan positif : ";cin >> bil;
        if(bil >= 0){
        if(bil % 2 == 0){
            cout << "Bilangan adalah genap";
        }
        else{
            cout << "Bilangan adalah ganjil";
        }
        cout << endl;
        }
    }while(bil >= 0);
    
    cout << "Bilangan yang di input negatif... Menghentikan Program..";
    return 0;
}