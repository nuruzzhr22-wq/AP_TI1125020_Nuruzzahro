#include<iostream>
#include<string>
using namespace std;

//Daftar Barang
//Prosedur tanpa parameter
void tampilkanBarang(){
    cout << "PROGRAM KASIR SEDERHANA" << endl;
    cout << "-----------------------" << endl;
    cout << "|Daftar Barang|harga|" << endl;
    cout << "------------------------" << endl;
    cout << "|Sarden Kaleng Kecil|Rp.8000|" << endl;
    cout << "|Sarden Kaleng Besar|Rp.22000|" << endl;
    cout << "|Sabun Mandi Batang|Rp.8000|" << endl;
    cout << "|Sabun Mandi Cair|Rp.15000|" << endl;
    cout << "|Minyak Goreng|Rp.12000|" << endl;
    cout << "|Mie Instan|Rp.3500|" << endl;
    cout << "|Kopi|Rp.10000|" << endl;
    cout << "|Pasta Gigi|Rp.10000|" << endl;
    cout << "------------------------" << endl;
}

//Hitung Total Pembayaran
//Fungsi dengan parameter dan nilai kembali
int hitungTotal(int jumlah, int harga){
    return jumlah * harga;
}

//Hitung Pajak
//Fungsi dengan parameter dan nilai kembali
double hitungPajak(int total){
    return total * 0.1; //misalnya pajak 10%
}

//Cetak Struk Pembelian
//Prosedure dengan parameter
void cetakStruk(string namaBarang, int jumlah, int harga, int diskon, int total, double pajak, double bayar){
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << "\n==============Struk Pembelian=================" << endl;
    cout << "Nama Barang: " << namaBarang << endl;
    cout << "Jumlah: " << jumlah << endl;
    cout << "Harga Satuan: Rp." << harga << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Total bayar: Rp." << total << endl;
    cout << "Diskon: Rp." << diskon << endl;
    cout << "Pajak: Rp." << pajak << endl;
    cout << "Total Pembayaran: Rp." << bayar << endl;
    cout << "===============================================" << endl;
}

int main(){
    int pilihan, jumlah;
    char ulang;

    do {
        tampilkanBarang();

        cout << "Masukkan nomor barang yang ingin dibeli: ";
        cin >> pilihan;

        cout << "Masukkan jumlah barang yang ingin dibeli: ";
        cin >> jumlah;

        int harga = 0;
        string namaBarang;

        //Percabangan
        switch (pilihan) {
            case 1:
                harga = 8000;
                namaBarang = "Sarden Kaleng Kecil";
                break;
            case 2:
                harga = 22000;
                namaBarang = "Sarden Kaleng Besar";
                break;
            case 3:
                harga = 8000;
                namaBarang = "Sabun Mandi Batang";
                break;
            case 4:
                harga = 15000;
                namaBarang = "Sabun Mandi Cair";
                break;
            case 5:
                harga = 12000;
                namaBarang = "Minyak Goreng";
                break;
            case 6:
                harga = 3500;
                namaBarang = "Mie Instan";
                break;
            case 7:
                harga = 10000;
                namaBarang = "Kopi";
                break;
            case 8:
                harga = 10000;
                namaBarang = "Pasta Gigi";
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
                continue; // Kembali ke awal loop
        }

        int total = hitungTotal(jumlah, harga);
        double pajak = hitungPajak(total);
        double diskon = 0;

        //Percabangan diskon
        if(total >= 50000){
            diskon = total * 0.1;
        }else if(total >= 20000){
            diskon = total * 0.05;
        }else{
            diskon = 0.0;
        }

        double bayar = total - (diskon + pajak);

        cetakStruk(namaBarang, jumlah, harga,diskon,total,pajak,bayar);

        cout << "Apakah Anda ingin membeli barang lain? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');
    cout << "Terima kasih telah berbelanja!" << endl;
    return 0;
}