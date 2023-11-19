#include <iostream>
using namespace std;

// Fungsi untuk mencetak deret Fibonacci berdasarkan jumlah bilangan yang dimasukkan
void cetakDeretFibonacci(int &jumlahBilangan) {
    cout << "Masukkan jumlah bilangan dalam deret Fibonacci: ";
    cin >> jumlahBilangan;

    int angkaSebelumnya = 0, angkaSaatIni = 1;
    cout << "Deret Fibonacci: ";

    for (int i = 1; i <= jumlahBilangan; ++i) {
        cout << angkaSebelumnya << " ";
        int angkaSelanjutnya = angkaSebelumnya + angkaSaatIni;
        angkaSebelumnya = angkaSaatIni;
        angkaSaatIni = angkaSelanjutnya;
    }

    cout << endl;
}

int main() {
    int n;

    // Memanggil fungsi untuk mencetak deret Fibonacci
    cetakDeretFibonacci(n);

    return 0;
}
