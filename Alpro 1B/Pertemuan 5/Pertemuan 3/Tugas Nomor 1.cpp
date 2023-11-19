#include <iostream>
using namespace std;

// Fungsi untuk menentukan nilai berdasarkan score
void tentukanNilai(int &skor) {
    // Menampilkan pesan dan nilai berdasarkan score yang dimasukkan
    cout << "Masukkan nilai skor: ";
    cin >> skor;

    if (skor >= 90) {
        cout << "Selamat! Anda mendapatkan nilai A." << endl;
    } else if (skor >= 80 && skor <= 89) {
        cout << "Anda mendapatkan nilai B." << endl;
    } else if (skor >= 70 && skor <= 79) {
        cout << "Anda mendapatkan nilai C." << endl;
    } else if (skor >= 60 && skor <= 69) {
        cout << "Anda mendapatkan nilai D." << endl;
    } else {
        cout << "Anda mendapatkan nilai E." << endl;
    }
}

int main() {
    int nilai;

    tentukanNilai(nilai);

    return 0;
}
