#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long k;
    cin>>k;
    for(long long x=1;x*x<k;x++){
        long long y2=k-x*x;
        long long y=(long long)sqrt(y2);
        if(y*y==y2&&x<=y){
            cout<<x<<" "<<y<<"\n";
        }
    }
    return 0;
}
