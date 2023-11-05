#include <iostream>

using namespace std;

int main()
{
    int bebekPakTatang, teman;
    bebekPakTatang = 1000;
    teman = 46;

    //Output diketahui
    cout << "Diketahui: " << endl;
    cout << "Bebek Pak Tatang = " << bebekPakTatang << endl;
    cout << "Teman Pak Tatang = " << teman << endl << endl;

    cout << "Jawaban: " << endl;
    cout << "Bebek yang Dibagikan kepada Setiap Teman Ialah = " << bebekPakTatang / teman << endl;
    cout << "Sisa Bebek yang Dibagiakn Pak Tatang Ialah = " << bebekPakTatang % teman << endl;

return 0;
}
