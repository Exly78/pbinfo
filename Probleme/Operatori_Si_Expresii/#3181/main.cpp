#include <iostream>
int main() {
    long long x, y, n;
    std::cin >> x >> y >> n;
    std::cout << n/(x*y) << "\n" << (n%(x*y))/y << "\n" << (n%(x*y))%y;
}
