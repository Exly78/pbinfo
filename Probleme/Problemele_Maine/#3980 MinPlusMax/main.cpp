#include <iostream>
using namespace std;

int main() {
    int n, x, minim = 1000, maxim = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x < minim)
            minim = x;
        if (x > maxim)
            maxim = x;
    }
    cout << minim + maxim;
}
