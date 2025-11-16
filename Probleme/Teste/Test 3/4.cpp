#include <iostream>
using namespace std;
int main() {
    int n, sum = 0, cnt = 0, x;
    cin >> n;
    for(int i=0; i < n; i++) {
        cin >> x;
        sum += x;
        cnt++;
    }
    cout << double(sum) / cnt;
    return 0;
}
