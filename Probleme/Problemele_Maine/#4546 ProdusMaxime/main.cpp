#include <iostream>
using namespace std;

int main() {
    int x;
    int max1 = 0, max2 = 0;
    bool v = false;

    while (true) {
        cin >> x;
        if (x == 0) break;

        if (x > max1) {
            max2 = max1;
            max1 = x;
            if (max2 != max1 && max2 != 0) v = true;
        } else if (x > max2 && x < max1) {
            max2 = x;
            v = true;
        } else if (max1 != 0 && max2 != 0 && max1 != max2) {
            v = true;
        }
    }

    if (!v) {
        cout << "nu exista";
    } else {
        cout << (long long)max1 * max2;
    }
}
