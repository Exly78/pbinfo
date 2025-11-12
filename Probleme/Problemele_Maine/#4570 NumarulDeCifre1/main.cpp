#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p = 0, i = 0;
    while (n > 0) {
        int cifra = n % 10;
        if (cifra % 2 == 0)
            p++;
        else
            i++;
        n /= 10;
    }
    cout << p << " " << i;
    return 0;
}