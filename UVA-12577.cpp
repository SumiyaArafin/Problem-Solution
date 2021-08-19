

#include <iostream>

using namespace std;

int main()
{
    int i =0;
    string line;
    while(cin>>line)
    {
        if(line == "*")
            break;
        else if(line == "Hajj")
            cout<<"Case "<<++i<<": "<<"Hajj-e-Akbar"<<"\n";
        else
            cout<<"Case "<<++i<<": "<<"Hajj-e-Asghar"<<"\n";

    }


    return 0;
}
