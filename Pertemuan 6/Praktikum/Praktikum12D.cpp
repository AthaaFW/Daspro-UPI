#include <iostream>
using namespace std;
int main()
{
 int matrika [3][2];
 int matrikb [3][2] = {{1,2},{3,4},{5,6}};
 int matrikc [3][2];

 int i,j;
 cout<<"\t===============================";
 cout<<"\n\t= Penjumlahan Matrik Ordo 3x2 =\n";
 cout<<"\t===============================\n\n";

 for(i=0;i<3;i++){
 for(j=0;j<2;j++){
 cout<<"matrik a ["<<i<<"] ["<<j<<"] = ";
 cin>>matrika[i][j];
 }
 }
 cout<<endl;

 for(i=0;i<3;i++){
 for(j=0;j<2;j++){
 matrikc[i][j]=matrika[i][j] + matrikb[i][j];
 }
 }

 cout<<"\nMatrik a\n";
 for(i=0;i<3;i++){
 for(j=0;j<2;j++){
 cout<<matrika[i][j]<<" ";
 }
 cout<<endl;
 }

 cout<<"\nMatrik b\n";
 for(i=0;i<3;i++){
 for(j=0;j<2;j++){
 cout<<matrikb[i][j]<<" ";
 }
 cout<<endl;
 }

 cout<<"\nMatrik c atau hasil\n";
 for(i=0;i<3;i++){
 for(j=0;j<2;j++){
 cout<<matrikc[i][j]<<" ";
 }
 cout<<endl;
 }
 return 0;
}