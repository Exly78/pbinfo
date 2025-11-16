#include <iostream>
using namespace std;
int main() {
    int n, x, minim;
    cin >> n >> minim;
    for(int i = 1; i < n; i++) {
        cin >> x;
        if(x < minim) minim = x;
    }
    cout << minim;
    return 0;
}
