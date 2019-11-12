#include <iostream>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <cstring>
using namespace std;

struct Book
{
    char name[20];
    int roll;
    int marks;
};

bool compareTwoStudents(Book a, Book b)
{
    // If total marks are not same then
    // returns true for higher total


    // If marks in Maths are not same then
    // returns true for higher marks

    if(a.marks==b.marks){
        return a.roll<b.roll;
    }
    return  a.marks > b.marks;
}

void computeRanks(Book a[], int n)
{
    // To calculate total marks for all Students

    // Sort structure array using user defined
    // function compareTwoStudents()
    sort(a, a+n, compareTwoStudents);


}


int main()
{
    struct Book b1[100];
    int n;
    int i=0;
    cin>>n;
    while(i<n){

        cin>>b1[i].roll;
        cin>>b1[i].name;
        cin>>b1[i].marks;
        i++;
    }


    computeRanks(b1, n);
    cout << ("Roll | Name       | Marks") << endl;
    cout<<"-------------------------"<<endl;

    // Display details of Students
    for (int i=0; i<n; i++)
    {
        int roll_size=0;

        if(b1[i].roll/10==0)
            roll_size=1;
        else if(b1[i].roll==100)
            roll_size=3;
        else
            roll_size=2;

        for(int j=3;j>=0;j--){
            if(j<roll_size){
                cout<<b1[i].roll<<" |";
                break;
            }
            else
                cout<<" ";
        }

        cout <<" "<< b1[i].name;
        int len=strlen(b1[i].name);
        for(int j=0;j<=10-len;j++){
            cout<<" ";
        }
        cout << "| ";
        cout << b1[i].marks ;
        cout <<endl;
    }
    cout<<endl;
    return 0;
}