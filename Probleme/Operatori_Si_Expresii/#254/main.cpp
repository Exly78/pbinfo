#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long a,b;
        cin>>a>>b;
        if(a>b)swap(a,b);
        long long pow2=1;
        while(pow2*2<=b)pow2*=2;
        if(pow2>=a)cout<<pow2<<"\n";
        else cout<<"0\n";
    }
    return 0;
}
