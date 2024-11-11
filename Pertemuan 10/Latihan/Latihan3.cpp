#include <iostream>

using namespace std;

float celToFar(float c){
    return (c*9/5) + 32; 
}

int main(){
    float cel;
    cout << "Masukan celcius: "; cin >> cel;
    cout << cel << "°C dalam °F adalah: " << celToFar(cel) <<"°F";

    return 0;
}