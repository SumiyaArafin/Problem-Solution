#include<iostream>
using namespace std;

int main()
{
    int n, k, m, result,r ;
    while(cin>>n>>k)
    {

        result = n;
        while(n>=k)
        {
            r = n;
            n = n/k;
            m = r%k;

            result = result + n;
            n = n + m ;


        }
cout<<result<<"\n";

    }
    return 0;
}
