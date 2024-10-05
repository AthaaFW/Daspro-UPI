#include <iostream>
#include <string>

int main(){
    std::string stringPisah = "Saya mahasiswa Tekkom, sedang belajar Daspro";
    std::size_t posisiPemisah = stringPisah.find(',');

    std::string bagianPertama = stringPisah.substr(0, posisiPemisah);
    std::string bagianKedua = stringPisah.substr(posisiPemisah + 1);

    std::cout << "Bagian pertama: " << bagianPertama << std::endl;
    std::cout << "Bagian kedua: " << bagianKedua << std::endl;

    return 0;
}
