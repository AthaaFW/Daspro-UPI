#include <iostream>
#include <string>

using namespace std;
int main(){
    string a;
    cout << "Masukan kata : "; cin >> a;
    for (int i = 1; i <= a.length(); i++)
    {
        for(int j = i; j <= a.length(); j++){
            cout << a.at(j-1) << " ";
        }cout << endl;
    }
    return 0;
}