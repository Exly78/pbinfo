#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long num;
        cin>>num;
        long long seq=1;
        while(seq*10<=num)seq*=10;
        while(seq>0){
            cout<<num/seq;
            if(seq>1)cout<<" ";
            num%=seq;
            seq/=10;
        }
    }
    return 0;
}
