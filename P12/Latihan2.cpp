#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
srand(time(0));
const char* jenis_kartu[] = {"Hati", "Wajik", "Keriting", "Sekop"};
const char* nilai_kartu[] = {"As", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
int index_jenis = rand() % 4;
int index_nilai = rand() % 13;
cout << "Anda mendapatkan kartu: " << nilai_kartu[index_nilai] << " " << jenis_kartu[index_jenis] << endl;
return 0;

}
