#include <iostream>
int main() {
    long long n, s = 0;
    std::cin >> n;
    s = n * (n + 1) / 2;
    std::cout << s;
    return 0;
}