#include <iostream>
using namespace std;

//Tanda & berarti referensi ke variabel asli
void naikkanGaji(int &gaji){
    gaji = gaji + 1000; //menambahkan 1000 ke gaji
}

//Pemanggilan fungsi
int main(){
    int gajisaya = 5000;
    naikkanGaji(gajisaya); //memanggil fungsi naikkanGaji
    cout <<"Gaji sekarang: " << gajisaya << endl; //menampilkan gaji setelah dinaikkan
    return 0;
}