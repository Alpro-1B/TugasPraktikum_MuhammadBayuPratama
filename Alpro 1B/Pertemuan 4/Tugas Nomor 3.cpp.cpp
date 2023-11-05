#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah bilangan dalam deret Fibonacci: ";
    cin >> n;

    int a = 0, b = 1;
    cout << "Deret Fibonacci: ";

    for (int i = 1; i <= n; ++i) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }

    cout << endl;

    return 0;
}
