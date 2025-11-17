#include<iostream>
using namespace std;
int main(){
    long long k;
    cin>>k;
    long long pos=0;
    for(int i=100;i<=999;i++){
        if(pos+3>=k){
            string s=to_string(i);
            cout<<s[k-pos-1];
            break;
        }
        pos+=3;
    }
    return 0;
}
