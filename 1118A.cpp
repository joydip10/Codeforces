#include<iostream>
#include<string.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    IOS
    int query;
    cin>>query;
    while(query--){
        long long int n,a,b;
        cin>>n>>a>>b;
        if(n==1 || (a==b))
        {
            cout<<a*n<<endl;
        }
        else{
            long long int p=(n/2);
            long long int k=(p*b);
            long long int c=k+((n-(p*2))*a);
            long long int s=(n*a);
            cout<<min(c,s)<<endl;
            }
    }
    return 0;
}
