#include <iostream>

using namespace std;

int main(){
    int nilaiTugas[5] = {85, 70, 90, 100, 95};
    for(int i = 0; i<5; i++){
        cout << "Nilai tugas-" << i+5 <<" adalah "<< nilaiTugas[i] << endl;
    }

    return 0;
}

