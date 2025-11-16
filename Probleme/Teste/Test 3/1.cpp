#include <iostream>
using namespace std;
int main() {
    int x, minim = 1e9;
    while(true) {
        cin >> x;
        if(x == 0) break;
        if(x > 0 && x < minim) minim = x;
    }
    cout << minim;
    return 0;
}
