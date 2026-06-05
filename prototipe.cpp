#include<iostream>
using namespace std;

// Deklrasi fungsi
int hitungLuas(int panjang, int lebar);

//Definisi fungsi
int hitungLuas(int panjang, int lebar){
    int luas = panjang * lebar;
    return luas;
}

//Pemanggilan fungsi
int main(){
    int p = 10, l = 5;

    int hasil = hitungLuas(p, l);
    cout << "Panjang: " << p << endl;
    cout << "Lebar: " << l << endl;
    cout << "Luas persegi panjang: " << hasil << endl;
    return 0;
}
