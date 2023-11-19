#include <iostream>
using namespace std;

// Fungsi untuk menemukan angka terbesar dari tiga angka
void temukanAngkaTerbesar(double &nilai1, double &nilai2, double &nilai3) {
    // Meminta pengguna memasukkan tiga angka
    cout << "Masukkan angka pertama: ";
    cin >> nilai1;
    cout << "Masukkan angka kedua: ";
    cin >> nilai2;
    cout << "Masukkan angka ketiga: ";
    cin >> nilai3;

    // Menentukan angka terbesar
    double terbesar = nilai1;
    if (nilai2 > terbesar) {
        terbesar = nilai2;
    }
    if (nilai3 > terbesar) {
        terbesar = nilai3;
    }

    // Mencetak angka terbesar
    cout << "Angka terbesar di antara ketiganya adalah: " << terbesar << endl;
}

int main() {
    double angkaPertama, angkaKedua, angkaKetiga;

    // Memanggil fungsi untuk menemukan angka terbesar
    temukanAngkaTerbesar(angkaPertama, angkaKedua, angkaKetiga);

    return 0;
}
