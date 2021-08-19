
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>

using namespace std;


int main()
{
    char a[100000];
int count = 0;


    while(gets(a))
    {



        for(int i = 0; a[i]; i++)
        {
            if(a[i] == '\"')
                ++count ;

            if(count%2 != 0 && a[i] == '\"')
            {
                cout<< '\`'<<'\`';


            }
            else if(count%2 == 0 && a[i] == '\"')
            {
                cout<< '\''<<'\'';

            }
            else
            {
                cout<<a[i];
            }




        }
        cout<<endl;

    }
    return 0;
}
