#include <iostream>
using namespace std;

int main() {
    int x, minim = 1000001; 
    bool exista = false;
    do {
        cin >> x;
        if (x > 0 && x < minim) {
            minim = x;
            exista = true;
        }
    } while (x != 0);

    if (exista) cout << minim;
    else cout << "NU EXISTA";
}
