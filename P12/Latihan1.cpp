#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
    srand(time(0));
    int dadu1 = rand() % 6 + 1;
    int dadu2 = rand() % 6 + 1;
    cout << "Lemparan dadu pertama: " << dadu1 << endl;
    cout << "Lemparan dadu kedua: " << dadu2 << endl;
    cout << "Total: " << dadu1 + dadu2;
    return 0;

}
