#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float k=0, s=0;
    long int n;
    cin >> n;
    for(int d=1; d <= n; d++)
        if(n%d == 0)
            s += d, k += 1;
    float m = s/k;
    cout << setprecision(2) << fixed << m;
}

// ba da ca va da asta sa dea dracu ii place sau nu
