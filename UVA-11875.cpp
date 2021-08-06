
#include <iostream>

using namespace std;

int main()
{

    int T,N, a[11], temp, halfOfN, count=0, flag;
    cin>>T;
    while(T)
    {


        while(cin>>N)
        {
            T--;

            count++;
            flag = N;

            for(int i = 0; i<flag; i++)
            {
                cin>>a[i];

            }

            for(int k = 0; k<flag; k++)
            {
                for(int m = k+1; m<flag; m++)
                {
                    if(a[k]>a[m])
                    {
                        temp = a[k];
                        a[k] = a[m];
                        a[m] = temp;
                    }
                }

            }
            halfOfN = flag/2 ;

            cout<<"Case "<<count<<": "<<a[halfOfN]<<"\n";
            if(T==0)
            {
                break;
            }
        }
    }

    return 0;
}
