#include <iostream>

using namespace std;

int main() {
 int n, a, b, k = 0 ;
  cin>>n;
  while(n){
        k++;
      int  sum=0;
       cin>>a;
       cin>>b;
       for(int i = a; i<=b; i++){
        if(i%2 != 0){
           sum = sum+i;
        }
       }
  cout<<"Case "<<k<<": "<<sum<<"\n";
    n--;
  }
    return 0;
}
