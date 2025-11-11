#include <iostream>
using namespace std;

int main() {
    int n, x, m = 0, a = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x > m) {
            m = x;
            a = 1;
        } else if (x == m) {
            a++;
        }
    }
    cout << m << " " << a;
}
