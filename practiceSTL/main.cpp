#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <bitset>
#include <set>
#include <unordered_set>


using namespace std;

int main() {

/*

    cout<<'apel';



    vector<vector<int>> a;

    a[0].push_back(10);

    cout<<a[0][0];

    vector<int> xyz;

    xyz[1] = 100;

    cout<<xyz[1]<<endl;

    xyz.push_back(10);

*/

/*

    set<int> s;
    set<int>:: iterator it;


    s.insert(100);
    s.insert(100);
    s.insert(1900);
    s.insert(900);
    s.insert(800);
    s.insert(1800);



    for(auto x:s){

        cout<<x<<" ";
    }

    cout<<endl;

    for(it = s.begin(); it != s.end(); it++){

        cout<<*it<<" ";
    }
*/


    //unordered set



    unordered_set<int> us;
    us.insert(1);
    us.insert(1);
    us.insert(2);
    us.insert(4);
    us.insert(3);
    us.insert(5);
    us.insert(6);


    for(auto x:us){

        cout<<x<<" ";
    }





    return 0;
}