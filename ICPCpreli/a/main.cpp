#include <cstdio>
#include<iostream>
#include<cstring>
#include <climits>
using namespace std;
int main()
{    int n;

    cin>>n;
    while(n>0){
        char str[1200010];
        char pr[1200010];
        int hamming;
        int count=0;

        cin>>str;
        cin>>pr;
        cin>>hamming;
        int len=strlen(str);
        int prLen=strlen(pr);
        for(int i=0;i<len-prLen+1;i++){
            int miss_match=0;
            for(int j=0;j<prLen;j++){
                if(str[i+j]!=pr[j]){
                    miss_match++;
                }
            }
            if(miss_match<=hamming){
                count++;
            }
        }
        cout<< count<<endl;
        n--;
    }

    return 0;
}
