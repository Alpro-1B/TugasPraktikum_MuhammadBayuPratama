#include <iostream>
using namespace std;

// Fungsi untuk mencetak segitiga berdasarkan tinggi yang dimasukkan
void cetakSegitiga(int &tinggiSegitiga) {
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggiSegitiga;

    for (int i = 1; i <= tinggiSegitiga; i++) {
        // Loop untuk mencetak spasi (bagian kiri segitiga)
        for (int j = 1; j <= tinggiSegitiga - i; j++) {
            cout << " ";
        }

        // Loop untuk mencetak bintang (bagian tengah segitiga)
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        // Pindah ke baris berikutnya
        cout << endl;
    }
}

int main() {
    int tinggi;

    // Memanggil fungsi untuk mencetak segitiga
    cetakSegitiga(tinggi);

    return 0;
}
