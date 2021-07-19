
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t1, t2, marks, sum
    , i, totalSum, avg, a[1001], avgsum  ;
    double aboveAvg;
    cin>>t1;
    while(t1)
    {
        aboveAvg = 0;
        cin>>t2;
        int str = t2;
        i =0;
        sum =0;
        avgsum =0;
        while(t2)
        {
            i ++;
            cin>> marks;
            a[i] = marks;
            sum = sum + marks;

            t2--;
        }
        avg = sum / str ;
        for(int j =1; j<=str; j++)
        {
            if(a[j]>avg){
                aboveAvg ++;
            }
        }
         std::cout << std::fixed;
         std::cout << std::setprecision(3);
         std::cout << (aboveAvg/ str)* 100 << "%" <<"\n" ;

        t1--;
    }
    return 0;
}
