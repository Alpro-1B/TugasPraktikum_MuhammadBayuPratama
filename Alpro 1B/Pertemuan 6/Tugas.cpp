#include <iostream>
using namespace std;

// Fungsi untuk mencari nilai tertinggi dalam array
void cariNilaiTertinggi(int arr[], int panjangArray, int &nilaiTertinggi) {
    nilaiTertinggi = arr[0]; // Menginisialisasi nilai tertinggi dengan nilai pertama dalam array

    // Melakukan iterasi untuk mencari nilai tertinggi dalam array
    for (int i = 1; i < panjangArray; ++i) {
        if (arr[i] > nilaiTertinggi) {
            nilaiTertinggi = arr[i];
        }
    }
}

int main() {
    int panjangArray;
    cout << "Masukkan panjang array: ";
    cin >> panjangArray;

    int arrayInput[panjangArray];
    cout << "Masukkan elemen-elemen array:" << endl;

    for (int i = 0; i < panjangArray; ++i) {
        cin >> arrayInput[i];
    }

    int nilaiTertinggi;
    cariNilaiTertinggi(arrayInput, panjangArray, nilaiTertinggi);

    bool nilaiDitemukan = false;
    int indeksNilaiTertinggi = -1;

    // Mencari indeks nilai tertinggi dalam array
    for (int i = 0; i < panjangArray; ++i) {
        if (arrayInput[i] == nilaiTertinggi) {
            nilaiDitemukan = true;
            indeksNilaiTertinggi = i;
            break;
        }
    }

    // Menampilkan hasil pencarian
    if (nilaiDitemukan) {
        cout << "Nilai tertinggi (" << nilaiTertinggi << ") ditemukan pada indeks: " << indeksNilaiTertinggi << endl;
    } else {
        cout << "Nilai tertinggi tidak ditemukan dalam array." << endl;
    }

    return 0;
}
