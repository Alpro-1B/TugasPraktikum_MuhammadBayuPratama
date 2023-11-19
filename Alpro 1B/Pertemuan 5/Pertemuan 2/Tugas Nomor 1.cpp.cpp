#include <iostream>
using namespace std;

// Fungsi untuk menukar nilai antara dua variabel
void swapValues(int &firstValue, int &secondValue) {
    // Menyimpan penambahan kedua nilai dalam firstValue
    firstValue = firstValue + secondValue; //Disini first value menjadi 18

    // Mengurangi nilai kedua dari hasil penambahan untuk mendapatkan nilai kedua asli dalam secondValue
    secondValue = firstValue - secondValue; //Disini second value menjadi 10

    // Mengurangi nilai kedua dari hasil penambahan untuk mendapatkan nilai pertama asli dalam firstValue
    firstValue = firstValue - secondValue; //Disini first value menjadi 8
}

int main() {
    int firstValue, secondValue;
    firstValue = 10; //ini variabel pertama
    secondValue = 8; //ini variabel kedua

    cout << "Sebelum Swap:" << endl;
    cout << "First Value = " << firstValue << endl;
    cout << "Second Value = " << secondValue << endl << endl;

    // Memanggil fungsi untuk menukar nilai variabel
    swapValues(firstValue, secondValue);

    cout << "Setelah Swap:" << endl;
    cout << "First Value = " << firstValue << endl;
    cout << "Second Value = " << secondValue << endl;

    return 0;
}
