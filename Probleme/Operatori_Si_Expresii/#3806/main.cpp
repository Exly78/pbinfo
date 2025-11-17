#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a){
        double ma=sqrt((2*b*b+2*c*c-a*a)/4.0);
        double mb=sqrt((2*a*a+2*c*c-b*b)/4.0);
        double mc=sqrt((2*a*a+2*b*b-c*c)/4.0);
        long long result=(long long)(ma*100+0.5)/100.0;
        cout<<(long long)result<<"."<<(long long)(ma*100+0.5)%100<<"\n";
        result=(long long)(mb*100+0.5)/100.0;
        cout<<(long long)result<<"."<<(long long)(mb*100+0.5)%100<<"\n";
        result=(long long)(mc*100+0.5)/100.0;
        cout<<(long long)result<<"."<<(long long)(mc*100+0.5)%100<<"\n";
    } else {
        cout<<"Imposibil\n";
    }
    return 0;
}
