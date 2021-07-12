#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    int check=0;
    cin>>s1>>s2;
    int i,j;
    for(i =0,j=(s2.size()-1); i< s1.size(),j>=0; i++,j--)
    {
            if(s1[i]!=s2[j])
            {
                check=1;
                break;
            }

    }
    if(check==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
