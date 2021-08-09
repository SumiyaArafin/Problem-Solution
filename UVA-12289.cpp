
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    int T, count, o= 0, n =0, e =0, t=0, w=0, other =0 ;
    char a[6];
    cin>>T;
    string number;
    while(T)
    {
        count = 0;
        cin>>number;
        strcpy(a, number.c_str());
        if(number.length()>3)
        {
            cout<<"3"<<"\n";
        }

        else
        {
            for(int i = 0; i <number.length(); i ++)
            {
                if(a[i]== 'o')
                {
                    o = 2;
                    count = count +2;
                }
                else  if(a[i]== 'n')
                {
                    n = 1;
                    count = count +0;
                }
                else  if(a[i]== 'e')
                {

                    e = 1;
                    count = count +0;

                }
                else  if(a[i] == 't')
                {
                    t = 5;
                    count = count +5;

                }
                else if(a[i]== 'w')
                {

                    w = 5;
                    count = count +5;

                }
                else
                {
                    if((t+w+o)>=7)
                        count = count +2;
                if((o+n+e)<7)
                    count = count +1;
                }



            }

            if(count <=7)

                cout<< "1"<<"\n";
            else
                cout<<"2"<<"\n";

        }

        T--;
    }

    return 0;
}
