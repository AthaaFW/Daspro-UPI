#include <iostream>

using namespace std;

int tambah(int a, int b){
    return a+b;
}

int kurang(int a, int b){
    return a-b;
}

int kali(int a, int b){
    return a*b;
}

int bagi(int a, int b){
    return a/b;
}

int modulusS(int a, int b){
    return a%b;
}

int inputNum1(int num1){
        while(cin.fail()){
            cout << "Hanya masukan angka!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Masukan angka pertama: "; cin >> num1;
            cout << endl;
        }

        return num1;
}

int main(){
    int num1, num2, pilih;
    do{
        cout << "====Kalkulator====" << endl;
        cout << "==================" << endl;
        cout << "1. A Tambah B" << endl;
        cout << "2. A Kurang B" << endl;
        cout << "3. A Kali B" << endl;
        cout << "4. A Bagi B" << endl;
        cout << "5. A Modulus B" << endl;
        cout << "6. Tutup Program" << endl;
        cout << "==================" << endl;
        cout << "Masukan pilihan: "; cin >> pilih;
        while(cin.fail()){
            cout << "Hanya masukan angka!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Masukan pilihan: "; cin >> pilih;
            cout << endl;
        }
        cout << endl;
        
        switch (pilih)
        {
        case 1:
            cout << "Masukan angka pertama: "; cin >> num1;
            while(cin.fail()){
            cout << "Hanya masukan angka!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Masukan angka pertama: "; cin >> num1;
            cout << endl;
        }
            cout << "Masukan angka kedua: "; cin >> num2;
            while(cin.fail()){
            cout << "Hanya masukan angka!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Masukan angka kedua: "; cin >> num2;
            cout << endl;
        }
            cout << endl;
            cout << num1 << " + " << num2 << " = "<< tambah(num1, num2) << endl;
            break;
        case 2:
            cout << "Masukan angka pertama: "; cin >> num1;
            while(cin.fail()){
            cout << "Hanya masukan angka!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Masukan angka pertama: "; cin >> num1;
            cout << endl;
        }
            cout << "Masukan angka kedua: "; cin >> num2;
            while(cin.fail()){
            cout << "Hanya masukan angka!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Masukan angka kedua: "; cin >> num2;
            cout << endl;
        }
            cout << endl;
            cout << endl;
            cout << num1 << " - " << num2 << " = "<< kurang(num1, num2) << endl;
            break;
        case 3:
            cout << "Masukan angka pertama: "; cin >> num1;
            while(cin.fail()){
            cout << "Hanya masukan angka!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Masukan angka pertama: "; cin >> num1;
            cout << endl;
        }
            cout << "Masukan angka kedua: "; cin >> num2;
            while(cin.fail()){
            cout << "Hanya masukan angka!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Masukan angka kedua: "; cin >> num2;
            cout << endl;
        }
            cout << endl;
            cout << endl;
            cout << num1 << " x " << num2 << " = "<< kali(num1, num2) << endl;
            break;
        case 4:
            cout << "Masukan angka pertama: "; cin >> num1;
            while(cin.fail()){
            cout << "Hanya masukan angka!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Masukan angka pertama: "; cin >> num1;
            cout << endl;
        }
            cout << "Masukan angka kedua: "; cin >> num2;
            while(cin.fail()){
            cout << "Hanya masukan angka!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Masukan angka kedua: "; cin >> num2;
            cout << endl;
        }
            cout << endl;
            cout << endl;
            cout << num1 << " / " << num2 << " = "<< bagi(num1, num2) << endl;
            break;
        case 5:
            cout << "Masukan angka pertama: "; cin >> num1;
            while(cin.fail()){
            cout << "Hanya masukan angka!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Masukan angka pertama: "; cin >> num1;
            cout << endl;
        }
            cout << "Masukan angka kedua: "; cin >> num2;
            while(cin.fail()){
            cout << "Hanya masukan angka!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Masukan angka kedua: "; cin >> num2;
            cout << endl;
        }
            cout << endl;
            cout << endl;
            cout << num1 << " dimodulus " << num2 << " = "<< modulusS(num1, num2) << endl;
            break;
        case 6:
            cout << "Menutup kalkulator...";
            break;
        default:
            cout << "Pilihan tidak tesedia: ";
            break;
        }
        cout << endl;

    }while(pilih != 6);
    return 0;
}