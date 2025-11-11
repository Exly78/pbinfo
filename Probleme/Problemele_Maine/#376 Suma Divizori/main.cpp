#include <iostream>
using namespace std;

int main() {
    long long n, suma = 0;
    cin >> n;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            suma += i;
            if (n / i != i) {
                suma += n / i;
            }
        }
    }
    cout << suma;
    return 0;
}
