#include <iostream>
int main() {
    int n;
    std::cin >> n;
    long long total = 1;
    for(int i = 0; i < 5; i++) {
        total *= n;
    }
    std::cout << total;
}
