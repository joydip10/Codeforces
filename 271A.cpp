#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num,des;
    cin>>num;
    for(int i=num+1;; i++)
    {
        stringstream ss;
        ss << i;
        string s=ss.str();
        if(s[0]!=s[1] && s[0] !=s[2] && s[0]!=s[3] && s[1]!=s[0] && s[1] !=s[2] && s[1]!=s[3] && s[2]!=s[0] && s[2] !=s[1] && s[2]!=s[3] && s[3]!=s[0] && s[3] !=s[1] && s[3]!=s[2])
        {
            des=i;
            break;
        }
    }
    cout<<des<<endl;
    return 0;

}
