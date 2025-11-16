#include <iostream>
using namespace std;
int main() {
    int n, nr_pare = 0, nr_cifre = 0;
    cin >> n;
    while(n) {
        int cifra = n % 10;
        if(cifra % 2 == 0) nr_pare++;
        nr_cifre++;
        n /= 10;
    }
    cout << "Pare: " << nr_pare << " Total: " << nr_cifre;
    return 0;
}
