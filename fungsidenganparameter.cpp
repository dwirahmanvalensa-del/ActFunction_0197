#include <iostream>
using namespace std;

int panjang, lebar;

void input(){
    cout << "Masukkan Panjang : ";
    cin >> panjang;
    cout << "Masukkan Lebar : ";
    cin >> lebar;
}
int luaspersegi(int a,int b){
    return a * b;
}
int jumlah(int x, int y, int z){
    return x+y+z;
}
void output(){
    cout << "hasil dari penjumlahan : " << jumlah(3,2,7);
}