#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin>>test;
    int length;
    string str;
    while(test--)
    {
        bool check=true;
        cin>>length;
        for(int i =0;i<length;i++)
        {
            cin>>str[i];
        }
        check = true;

        if (length < 11)
            check = false;
        else
        {
            check = false;

            for (int i=0; i<length; i++)
            {
                if (str[i] == '8' && length-i >= 11)
                {
                    check = true;
                    break;
                }
            }
        }
        if(check==true)
        {
            cout<<"YES"<<endl;
        }
        else if(check==false)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
