
#include <iostream>

using namespace std;

int main()
{
    int N, count, temp, inc = 0;
    while(cin>>N)
    {
        count = 0;
        if(N<0)
        {
            break;
        }
        if(N == 1)
        {
             cout<<"Case "<<++inc<<": "<<count<<"\n";
             continue;
        }
        for(int i = 1; i<= N;)
        {

            if(i == 1)
            {
                i++;

            }
            count ++;
            temp = i;
            i = i*2;
            if(i>N)
            {
                if(N!=temp)
                    count++;
            }


        }
        cout<<"Case "<<++inc<<": "<<count<<"\n";

    }

    return 0;
}
