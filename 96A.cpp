#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int chk=1;
    for(int i=1;i<str.size();i++)
    {
       if(str[i]==str[i-1]){
        chk++;
       }
       else if(str[i]!=str[i-1]){
        chk=1;
       }

       if(chk>=7){
        cout<<"YES"<<endl;
        break;
       }

    }
    if(chk<7) cout<<"NO"<<endl;
    return 0;
}
