#include<iostream>
using namespace std;

int main() {
    int t, n;
    cin>>t;
    while(cin>>n){

        long long int res = (((((n*567)/9)+7492)*235)/47)-498;
        int d = res/10;
        int m = d%10;
        if(m<0){
            m = m * (-1);
        }
         cout<<m<<endl;

        n--;

    }

    }
