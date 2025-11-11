#include <iostream>
using namespace std;

int main()
{
    int nr, max=-1000000;
    cin>>nr;
    if(nr==0) cout<<"Nu exista nr";
    else
    {
        while(nr)
        {
            max = (nr>max)? nr:max;
            cin>>nr;
        }
        cout<<max;
    }
}