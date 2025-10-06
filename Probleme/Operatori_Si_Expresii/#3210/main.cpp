#include <iostream>
int main() {
    long long B, S;
    std::cin >> B >> S;
    long long C = S / B;
    long long P = B - (S % B);
    std::cout << C << " " << P;
}
