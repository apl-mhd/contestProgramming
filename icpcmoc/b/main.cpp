#include <iostream>
#include <cstdio>
#include <iostream>
#include <map>
using namespace std;



int main() {


    map<int, int> counter;

    int a,b,c;

    cin>>a>>b>>c;

    counter[a]=0;
    counter[b]=0;
    counter[c]=0;

    counter[a]++;
    counter[b]++;
    counter[c]++;

    if(counter[a] ==3 || counter[b] ==3 || counter[c] ==3)
        cout<<"Equilateral Triangle"<<endl;

    else if(counter[a] ==2 || counter[b] ==2 || counter[c] ==2)
        cout<<"Isosceles Triangle"<<endl;

    else
        cout<<"Bad Triangle"<<endl;



    return 0;
}