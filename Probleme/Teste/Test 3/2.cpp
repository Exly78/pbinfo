#include <iostream>
using namespace std;
int main() {
    int n, p = 1, ok = 0;
    cin >> n;
    while(n) {
        int cifra = n % 10;
        if(cifra % 2 == 1) {
            p *= cifra;
            ok = 1;
        }
        n /= 10;
    }
    if(ok) cout << p;
    else cout << "Nu există cifre impare";
    return 0;
}
