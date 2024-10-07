#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int A[3][4]={{3,4,8,0},{3,9,2,1},{6,3,0,2}};

    for (int b=0; b<3;b++){
        for (int k=0; k<4;k++){
            cout << A[b][k]<<" ";
        }
        cout << endl;
    }

    getch();
}