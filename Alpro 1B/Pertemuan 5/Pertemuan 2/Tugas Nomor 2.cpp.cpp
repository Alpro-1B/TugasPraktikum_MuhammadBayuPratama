#include <iostream>
using namespace std;

// Fungsi untuk menghitung pembagian bebek kepada teman-teman Pak Tatang
void hitungBebek(int &jumlahBebekPakTatang, int &jumlahTeman) {
    // Menampilkan jumlah bebek Pak Tatang dan teman-temannya
    cout << "Diketahui: " << endl;
    cout << "Jumlah Bebek Pak Tatang = " << jumlahBebekPakTatang << endl;
    cout << "Jumlah Teman Pak Tatang = " << jumlahTeman << endl << endl;

    // Menghitung jumlah bebek yang diberikan kepada setiap teman dan sisa bebek yang tidak terbagi
    cout << "Jawaban: " << endl;
    cout << "Bebek yang Dibagikan kepada Setiap Teman Ialah = " << jumlahBebekPakTatang / jumlahTeman << endl;
    cout << "Sisa Bebek yang Dibagikan oleh Pak Tatang Ialah = " << jumlahBebekPakTatang % jumlahTeman << endl;
}

int main() {
    int jumlahBebekPakTatang, jumlahTeman;
    jumlahBebekPakTatang = 1000;
    jumlahTeman = 46;

    // Memanggil fungsi untuk menghitung pembagian bebek
    hitungBebek(jumlahBebekPakTatang, jumlahTeman);

    return 0;
}
