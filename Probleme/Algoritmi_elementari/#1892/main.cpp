#include <iostream>
int main()
{
    int n,a,i;
    std::cin>>n;
    a=(n+1)/2;
    for(i=0; i<n; i++)
    {
        if(n%2==0)
        {
            std::cout<<"Skill issue gng";
            break;
        }
        else std::cout<<a+i<<' ';
    }

    return 0;
}