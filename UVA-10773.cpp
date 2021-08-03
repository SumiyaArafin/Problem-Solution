#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{

    long long n,  i = 0;
    double t1, t2, d, v, u, result;
    cin>>n;
    while(n)
    {
        i++;
        cin>>d>>v>>u;
        if(v>=u)
        {
           cout<<"Case "<<i<<": "<<"can't determine\n";

        }
        else
        {

            t1 = d/u;
            t2 = d/(sqrt(u*u - v*v));

            result = t2-t1;

            if(result <= 0)
            {
                cout<<"Case "<<i<<": "<<"can't determine\n";

            }
            else
            {
                cout<<"Case "<<i<<": ";
                std::cout << std::fixed;
                std::cout << std::setprecision(3);
                std::cout << result <<"\n";
            }

        }
        n--;
    }
    return 0;
}
