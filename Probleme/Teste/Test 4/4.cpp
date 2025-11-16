#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int nr = 2*n - 1;
    for(int i=0; i<n; i++, nr -= 2) cout << nr << " ";
    return 0;
}
