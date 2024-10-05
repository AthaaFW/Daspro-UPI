#include <iostream>
#include <string>

int main(){
    std::string stringModifikasi = "Belajar, Daspro";
    std::size_t posisiKarakter = stringModifikasi.find(',');

    stringModifikasi[posisiKarakter] = '-';

    std::cout << "String setelah modifikasi: "<< stringModifikasi << std::endl;

    return 0;
}