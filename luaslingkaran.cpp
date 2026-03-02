#include <iostream>
using namespace std;

float phi = 3.14159;
int r;

void input(){
    cout << "masukkan jari-jari :";
    cin >> r;
}

float luaslingkaran(int b){
    return phi*(b*b);
}