#include <iostream>
using namespace std;
int main(){
 int angka [2][3][4];
 int i,j,k;
 cout<<"\t===============================";
 cout<<"\n\t== Contoh Array Tiga Dimensi ==\n";
 cout<<"\t===============================\n\n";
 cout<<"== Masukkan elemen-elemen array angka ==\n";
 for(i=0;i<2;i++){
 for(j=0;j<3;j++){
 for(k=0;k<4;k++){
 cout<<"angka indeks ke ["<<i<<"]["<<j<<"]["<<k<<"]"<<" = ";
 cin>>angka[i][j][k];
 }
 }
 }
 cout<<"\n\n===============================\n";
 cout<<"== Tampil nilai elemen Array ==\n";
 cout<<"===============================\n";
 for(i=0;i<2;i++){
 for(j=0;j<3;j++){
 for(k=0;k<4;k++){
 cout<<"angka indeks ke ["<<i<<"]["<<j<<"]["<<k<<"]"<<" = "<<angka[i][j][k]<<endl;
 }
 }
 }
 return 0;
}