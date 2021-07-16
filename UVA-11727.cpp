
#include <iostream>

using namespace std;

int main()
{
    int n, sal[5],temp,k=0;
    cin>>n;
    while(n)
    { k++;
        cin>>sal[0];
        cin>>sal[1];
        cin>>sal[2];
        for(int i =0; i<3; i++)
        {
            for(int j = i+1; j<3; j++)
            {
                if(sal[i]>sal[j])
                {
                    temp = sal[i];
                    sal[i] = sal[j];
                    sal[j] = temp;

                }

            }

        }
        cout<<"Case "<<k<<": "<<sal[1]<<"\n";
        n--;
    }

    return 0;
}
