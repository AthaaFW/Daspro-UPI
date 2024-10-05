#include <iostream>

using namespace std;

int main(){
    int a, hasilAsli, hasilNot;
    cout << "Masukan Nilai A = "; cin>>a;

    hasilAsli = (a+5<15);
    hasilNot = !(a+5<15);

    cout<< "= Program Expresi Not ="<<endl;
    cout<< "======================="<<endl;
    cout<< "Nilai A              = "<<a<<endl;
    cout<< "Nilai hasilAsli = (a+5<15) = "<<hasilAsli<<endl;
    cout<< "Nilai hasilNot = !(a+5<15) = "<<hasilNot<<endl;
    return 0;

}
