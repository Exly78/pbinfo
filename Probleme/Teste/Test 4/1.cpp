#include <iostream>
using namespace std;
int main() {
    int x, maxim = -1e9;
    while(true) {
        cin >> x;
        if(x == 0) break;
        if(x > maxim) maxim = x;
    }
    cout << maxim;
    return 0;
}
