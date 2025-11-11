#include <iostream>
using namespace std;

int main() {
    int n, produs = 1, cifra;
    bool areImpare = false;
    cin >> n;
    if (n == 0) { 
        cout << -1;
        return 0;
    }
    while (n > 0) {
        cifra = n % 10;
        if (cifra % 2 == 1) {
            produs *= cifra;
            areImpare = true;
        }
        n /= 10;
    }
    if (areImpare)
        cout << produs;
    else
        cout << -1;
    return 0;
}
