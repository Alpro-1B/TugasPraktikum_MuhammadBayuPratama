#include <iostream>
using namespace std;

int main() {
    int tinggi;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    for (int i = 1; i <= tinggi; i++) {
        // Loop untuk mencetak spasi (kiri segitiga)
        for (int j = 1; j <= tinggi - i; j++) {
            cout << " ";
        }

        // Loop untuk mencetak bintang (tengah segitiga)
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        // Pindah ke baris berikutnya
        cout << endl;
    }

    return 0;
}
