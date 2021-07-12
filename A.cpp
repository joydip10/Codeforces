#include<bits/stdc++.h>
using namespace std;
int main(){
   int test;
   cin>>test;
   while(test--){
    long long int s,a,b,c;
    cin>>s>>a>>b>>c;
    long long int num = s/c;
    long long int p=(num/a);
    long long int extra=(p*b);
    long long int total=(num+extra);
    cout<<total<<endl;
   }
   return 0;
}
