#include <iostream>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <cstring>
using namespace std;


struct student{

    int rool;
    string name;
    int marks;
};

bool compare(student p, student q){
    if(p.marks == q.marks){

        return p.rool < q.rool;
    }
    else{
        return p.marks > q.marks;
    }
}



int main() {




    student info[100];

   int n;


   cin>>n;

    for (int i = 0; i <n; ++i) {



        cin>>info[i].rool>>info[i].name>>info[i].marks;

        //cout<<info[i].rool<<info[i].name<<info[i].marks;


    }

    sort(info, info+n,compare);



    cout<<"Roll | Name       | Marks"<<endl;
    cout<<"-------------------------"<<endl;


    for (int i = 0; i <n; ++i) {


        int x=10;


        if(info[i].rool<9) {
            printf("%3s%d", "", info[i].rool);

            /*int len=strlen(info[i].name);
            for(int j=0;j<=10-len;j++){
                cout<<" ";
            }*/

            cout << " | " << info[i].name << " | " << info[i].marks << endl;
        } else{

            printf("%2s%d", "",x, info[i].rool);

            cout << " | " << info[i].name << " | " << info[i].marks << endl;

        }

    }






    /*
    for (int i = 0; i <m ; ++i) {

        cin>>a>>b>>c;

        cout<<a<<b<<c<<endl;

    }

    */






    return 0;
}