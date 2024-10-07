#include <iostream>
using namespace std;

int main(){
    int numbers[] = {12, 90, 78, 32, 56};
    int max = numbers[0];

    for(int i = 1; i < 5; i++){
        if(numbers[i] > max){
            max = numbers[i];
        }
    }

    cout << "Nilai maksimum: " << max << endl;

    return 0;
}