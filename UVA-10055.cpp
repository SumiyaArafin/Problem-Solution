
#include<iostream>
using namespace std;

int main() {
  long long int a, b, c;
  while (cin>>a>>b) {
    if (a > b)
      c = a - b;
    else
      c = b - a;
    cout<<c<<"\n";
  }
  return 0;
}
