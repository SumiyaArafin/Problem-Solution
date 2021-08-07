
#include <iostream>

using namespace std;

int main()
{
    int T, k;
    long long   result = 0;
    string report,donate;
    cin>>T;


        while(T)
        {
            cin>>donate;

            if(donate == "report")
            {

                    cout<< result <<"\n";
                    T--;
                    continue;


            }
            cin>> k;
            result = result + k;
            T--;





        }


    return 0;
}
