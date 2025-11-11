#include <iostream>
using namespace std;

int main() {
    int n, x;
    int minim = 1000000000;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x < minim)
            minim = x;
    }
    cout << minim;
}
