

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>



using namespace std;


struct Pq{

    int  a;
    int  b;

    bool  operator<(const Pq& y) const {
        return  a > y.a;
    }


};


int main() {



    map<int, int> m;

    m[1] = 100;
    cout<<m[1]<<endl;

    cout<<m[100]<<endl;




    priority_queue<Pq> q;

    Pq y;




    y.a=110;
    y.b=30;

    q.push(y);

    y.a=20;
    y.b=11;


    q.push(y);


   Pq  value = q.top();

   cout<<value.a;


    return 0;
}






