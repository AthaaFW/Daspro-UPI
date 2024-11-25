#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
srand(time(0));
const char* hadiah[] = {"Mobil", "Pulsa 100K", "Vocer belanja", "Tiket hiburan"};
int index = rand() % 4;
cout << "Hadiah: " << hadiah[index] << endl;

return 0;

}
