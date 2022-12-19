#include <iostream>

int main()
{
    int a,c,b,d,sum;
    std::cout<<"Enter number of iterations : ";
    std::cin>>a;
    for(int i = 0; i<a; i++)
    {
        sum = 0;
        b=0;
        c = 0;
        d = 1;
        std::cout<<"\nEnter a value for N : ";
        std::cin>>b;
        while(d<=b)
        {
            if(d%2==0)
            sum+=d;
            c+=d;
            d = c-d;
            c = c-d;
            d+=c;
        }
        std::cout<<"\nSum = "<<sum<<"\n";
    }
}