#include <iostream>
int main() {
    int n, s = 0, x, i;
    std::cin >> n;
    for(i = 1; i <= n; i++) {
        s += i*2;
    }
    std::cout << "S = " << s;
}