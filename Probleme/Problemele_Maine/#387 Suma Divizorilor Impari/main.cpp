#include <iostream>
using namespace std;

int main() {
    long long n, suma = 0;
    cin >> n;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (i % 2 == 1) {
                suma += i;
            }
            long long d = n / i;
            if (d != i && d % 2 == 1) {
                suma += d;
            }
        }
    }
    cout << suma;
    return 0;
}
