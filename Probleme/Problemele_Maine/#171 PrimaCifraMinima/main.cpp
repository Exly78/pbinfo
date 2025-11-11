#include <iostream>
using namespace std;

int primaCifra(int n) {
    while (n >= 10) n /= 10;
    return n;
}

int main() {
    int n, x, cmin = 10, nr_max = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        int c = primaCifra(x);
        if (c < cmin || (c == cmin && x > nr_max)) {
            cmin = c;
            nr_max = x;
        }
    }
    cout << nr_max;
    return 0;
}
