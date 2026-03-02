#include <iostream>
using namespace std;

int p, l;

void input(){
    cout << "masukkan panjang: ";
    cin >> p;

    cout << "masukkan lebar: ";
    cin >> l;
}

int luaspersegi(){
    return p * l;
}

void output(){
    cout << "hasil luas : " << luaspersegi() << end;
}

int main(){
    input();
    output();
}