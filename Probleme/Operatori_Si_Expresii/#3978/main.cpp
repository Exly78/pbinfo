#include <iostream>
int main() {
    long long a, b, c;
    std::cin >> a >> b >> c;
    std::cout << (b-a+1)*(a+b)/2 << " " << (c-b+1)*(b+c)/2 << " " << (c-a+1)*(a+c)/2;
}
