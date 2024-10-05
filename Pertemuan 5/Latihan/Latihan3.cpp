#include <iostream>

using namespace std;

int main(){
    string kalimat;
    size_t hurufA, hurufAbesar;

    cout << "Program ganti huruf A to I" << endl;
    cout << "==========================" << endl;
    cout << "Masukan kalimat : "; getline(cin, kalimat);
    
    
    for(int i = 0; i < kalimat.size(); i++){
        if(kalimat[i] == 'a'){
            kalimat[i] = 'i';
        }
    }
    cout << "Kalimat setelah dimodifikasi : " << kalimat;  

    return 0;
}