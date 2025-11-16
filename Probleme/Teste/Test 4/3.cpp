#include <iostream>
using namespace std;
int main() {
    int n, cnt = 0;
    cin >> n;
    do {
        cnt++;
        n /= 10;
    } while(n);
    cout << cnt;
    return 0;
}
