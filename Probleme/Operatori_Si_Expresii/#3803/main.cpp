#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    
    // Formula for area of regular polygon: A = (n * l^2) / (4 * tan(pi/n))
    double pi = acos(-1.0);
    double angle = pi / n;
    double area = (n * l * l) / (4.0 * tan(angle));
    
    // Truncate to 2 decimal places
    area = floor(area * 100) / 100.0;
    
    cout << fixed << setprecision(2) << area << endl;
    
    return 0;
}
