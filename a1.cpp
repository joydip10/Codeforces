#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    int x,y,x1,y1,test;
    cin>>test;
    while(test--){
        cin>>x>>y>>x1>>y1;
        if(x==x1){
        cout<<x<<" "<<y1<<endl;
        }
        else{
        cout<<x<<" "<<x1<<endl;
        }
    }
    return 0;
}

