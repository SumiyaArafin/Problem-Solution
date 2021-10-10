#include <iostream>

using namespace std;

int main()
{
    int T, N, temp, m = 0;
    int a[10001];
    cin>>T;
    while(T)
    { m++;
        cin>>N;
         for(int i = 0; i<N; i++){
            cin >> a[i];
          }
          for(int i = 0; i< N; i++){
            for(int j = 1; j<N-i; j++){
                if(a[j-1] < a[j])
                    {
                        int temp = a[j-1];
                        a[j-1] = a[j];
                        a[j] = temp;
                    }
            }
          }

            cout<<"Case "<<m<<": "<<a[0]<<"\n"  ;




        T--;
    }

    return 0;
}
