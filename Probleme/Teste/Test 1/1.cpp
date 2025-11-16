#include <iostream>
using namespace std;
int main() {
    int n, x, maxim;
    cin >> n;
    cin >> maxim;
    for (int i = 1; i < n; ++i) {
        cin >> x;
        if (x > maxim) maxim = x;
    }
    cout << maxim;
    return 0;
}
