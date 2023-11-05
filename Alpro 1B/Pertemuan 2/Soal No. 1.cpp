#include <iostream>

using namespace std;

int main()
{
    int firstValue, secondValue, thirdValue;
    firstValue = 10; //ini variabel perttama
    secondValue = 8; //ini variabel kedua
    thirdValue; //ini variabel tambahan

    //Operasi menggunakan variabel tambahan
    thirdValue = firstValue; //Disini third value menjadi 10
    firstValue = secondValue; //Disini first value menjadi 8
    secondValue = thirdValue; //Disini second value menjadi 10

    //Output jawaban menggunakan variabel tambahan
    cout << "Jawaban Menggunakan Variabel Tambahan:" << endl;
    cout << "First Value = " << firstValue << endl;
    cout << "Seconf Value = " << secondValue << endl << endl;

   //Operasi tanpa menggunakan variabel tambahan
   firstValue = 10;
   secondValue = 8;

   firstValue = firstValue + secondValue; //Disini first value menjadi 18
   secondValue = firstValue - secondValue; //Disini second value menjadi 10
   firstValue = firstValue - secondValue; //Disini first value menjadi 8

   cout << "Jawaban Tanpa Variabel Tambahan: " << endl;
   cout << "First Value = " << firstValue << endl;
   cout << "Second Value = " << secondValue << endl;

    return 0;
}
