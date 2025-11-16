#include <iostream>
using namespace std;
int main() {
    int n, suma = 0;
    cin >> n;
    while (n) {
        int cifra = n % 10;
        if (cifra > 3 && cifra <= 7)
            suma += cifra;
        n /= 10;
    }
    cout << suma;
    return 0;
}
