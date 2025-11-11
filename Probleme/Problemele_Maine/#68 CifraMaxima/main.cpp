#include <iostream>
using namespace std;

int main() {
    int n, maxim = 0, cifra;
    cin >> n;
    if (n == 0)
        maxim = 0;
    while (n > 0) {
        cifra = n % 10;
        if (cifra > maxim)
            maxim = cifra;
        n /= 10;
    }
    cout << maxim;
}
