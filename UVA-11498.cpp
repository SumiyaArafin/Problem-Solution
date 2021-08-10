
#include <iostream>

using namespace std;

int main()
{
    int K;
    long long N, M, X, Y;

    while(cin>>K)
    {
        if(K == 0)
            break;
        cin>>N>>M;
        while(K)
        {

            cin>>X>>Y;
            if(X>N && Y>M)
                cout<<"NE"<<"\n";
            else if(X>N && Y<M)
                cout<<"SE"<<"\n";
            else  if(X<N && Y>M)
                cout<<"NO"<<"\n";
            else  if(X<N && Y<M)
                cout<<"SO"<<"\n";
            else   if(X<N && Y>M)
                cout<<"NE"<<"\n";
            else
                cout<<"divisa"<<"\n";
                K--;

        }
    }
    return 0;
}
