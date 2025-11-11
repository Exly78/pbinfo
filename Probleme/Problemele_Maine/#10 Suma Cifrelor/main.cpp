#include <iostream>
using namespace std;

int main()
{
    unsigned long int x;
    unsigned int sum=0;
    cin>>x;
    while (x!=0)
    {
        sum+=x%10;
        x/=10;
    }
    cout<<"Suma este " <<sum;
    return 0;
}