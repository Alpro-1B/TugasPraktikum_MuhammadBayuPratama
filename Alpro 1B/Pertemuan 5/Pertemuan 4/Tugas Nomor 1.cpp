#include <iostream>
using namespace std;

// Fungsi untuk menampilkan dan menghitung jenis-jenis bilangan
void hitungJenisBilangan() {
    int batas;
    cout << "Masukkan batas: ";
    cin >> batas;

    int totalGanjil = 0;
    int totalGenap = 0;
    int totalPrima = 0;

    int faktorGanjil[batas];
    int faktorGenap[batas];
    int faktorPrima[batas];

    int i = 1;

    do {
        // Menggunakan switch-case untuk memeriksa jenis bilangan
        switch (i % 2) {
            case 0: // Bilangan genap
                faktorGenap[totalGenap] = i;
                totalGenap++;
                break;
            default: // Bilangan ganjil
                faktorGanjil[totalGanjil] = i;
                totalGanjil++;
        }

        int isPrimeFlag = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrimeFlag = 0;
                break;
            }
        }

        if (isPrimeFlag) {
            faktorPrima[totalPrima] = i;
            totalPrima++;
        }

        i++; // Naikkan nilai i
    } while (i <= batas);

    // Menampilkan jenis-jenis bilangan dan totalnya
    cout << "Bilangan Ganjil: ";
    for (int j = 0; j < totalGanjil; j++) {
        cout << faktorGanjil[j] << " ";
    }
    cout << "\nJumlah Bilangan Ganjil: " << totalGanjil << endl;

    cout << "\nBilangan Genap: ";
    for (int j = 0; j < totalGenap; j++) {
        cout << faktorGenap[j] << " ";
    }
    cout << "\nJumlah Bilangan Genap: " << totalGenap << endl;

    cout << "\nBilangan Prima: ";
    for (int j = 0; j < totalPrima; j++) {
        cout << faktorPrima[j] << " ";
    }
    cout << "\nJumlah Bilangan Prima: " << totalPrima << endl;
}

int main() {
    // Memanggil fungsi untuk menghitung jenis-jenis bilangan
    hitungJenisBilangan();

    return 0;
}
