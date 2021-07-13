
#include<iostream>
using namespace std;

int main()
{
    int i,j,n,count=0, flag = 0, temp;


    while((cin>>i>>j))
    {
        if(i>j){
            temp = i;
            i = j;
            j = temp;
        }
        cout<<i<<" "<<j;
        while(i<=j)
        {

            n = i;



            while(n)
            {
                count ++;
                if(n==1)
                    break;

                else if(n%2 != 0)
                {
                    n = (3 * n) + 1;
                }
                else
                {
                    n = n/2;
                }

            }

            if(count > flag)
            {
                flag = count;

            }
            count = 0;
            i++;

        }
        cout <<" "<< flag <<"\n";
        flag = 0;
    }
}
