#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    double ma=sqrt((2*b*b+2*c*c-a*a)/4);
    double mb=sqrt((2*a*a+2*c*c-b*b)/4);
    double mc=sqrt((2*a*a+2*b*b-c*c)/4);
    cout<<(long long)ma<<" "<<(long long)mb<<" "<<(long long)mc;
    return 0;
}
