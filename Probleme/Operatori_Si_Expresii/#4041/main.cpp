#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long m=(long long)((sqrt(1+8.0*n)-1)/2);
    while(m*(m+1)/2<n)m++;
    cout<<m<<endl;
    return 0;
}
