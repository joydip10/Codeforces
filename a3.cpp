#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    string s1="RGB";
    string s2="RBG";
    string s3="GRB";
    string s4="GBR";
    string s5="BRG";
    string s6="BGR";
    int num;
     cin>>num;
    cin>>s;
    if(s.size()==num )
    {int counter =0;
        if(num==2 && s[0]==s[1] && s[0]=='R'){
            cout<<1<<endl;
            cout<<"RG"<<endl;


        }
        if(num==2 && s[0]==s[1] && s[0]=='G')
        {
             cout<<1<<endl;
            cout<<"GB"<<endl;


        }
        if(num==2 && s[0]==s[1] && s[0]=='B')
        {

        cout<<1<<endl;
            cout<<"BR"<<endl;

        }
        if(num>2 || num<2){
        if(s[0]==s1[0] && s[1]==s1[1]){
        for(int i =0;i<s.size();i++){
                if(i%3==0 && s[i]!=s1[0]){
                    s[i]=s1[0];
                    counter++;
                }
                else if(i%3==1 && s[i]!=s1[1]){
                    s[i]=s1[1];
                    counter++;
                }
                else if(i%3==2 && s[i]!=s1[2]){
                    s[i]=s1[2];
                    counter++;
                }

        }
        }
        else if(s[0]==s2[0] && s2[1]==s1[1]){
        for(int i =0;i<s.size();i++){
                if(i%3==0 && s[i]!=s2[0]){
                    s[i]=s2[0];
                    counter++;
                }
                else if(i%3==1 && s[i]!=s2[1]){
                    s[i]=s2[1];
                    counter++;
                }
                else if(i%3==2 && s[i]!=s2[2]){
                    s[i]=s2[2];
                    counter++;
                }

        }
        }
        if(s[0]==s2[0] && s[1]==s2[1]){
        for(int i =0;i<s.size();i++){
                if(i%3==0 && s[i]!=s2[0]){
                    s[i]=s2[0];
                    counter++;
                }
                else if(i%3==1 && s[i]!=s2[1]){
                    s[i]=s2[1];
                    counter++;
                }
                else if(i%3==2 && s[i]!=s2[2]){
                    s[i]=s2[2];
                    counter++;
                }

        }
    }
        if(s[0]==s3[0] && s[1]==s3[1]){
        for(int i =0;i<s.size();i++){
                if(i%3==0 && s[i]!=s3[0]){
                    s[i]=s3[0];
                    counter++;
                }
                else if(i%3==1 && s[i]!=s3[1]){
                    s[i]=s3[1];
                    counter++;
                }
                else if(i%3==2 && s[i]!=s3[2]){
                    s[i]=s3[2];
                    counter++;
                }

        }
}
        if(s[0]==s4[0] && s[1]==s4[1]){
        for(int i =0;i<s.size();i++){
                if(i%3==0 && s[i]!=s4[0]){
                    s[i]=s4[0];
                    counter++;
                }
                else if(i%3==1 && s[i]!=s4[1]){
                    s[i]=s4[1];
                    counter++;
                }
                else if(i%3==2 &&  s[i]!=s4[2]){
                    s[i]=s4[2];
                    counter++;
                }

        }
        }
        if(s[0]==s5[0] && s[1]==s5[1]){
        for(int i =0;i<s.size();i++){
                if(i%3==0 && s[i]!=s5[0]){
                    s[i]=s5[0];
                    counter++;
                }
                else if(i%3==1 && s[i]!=s5[1]){
                    s[i]=s5[1];
                    counter++;
                }
                else if(i%3==2 && s[i]!=s5[2]){
                    s[i]=s5[2];
                    counter++;
                }

        }
        }
        if(s[0]==s6[0] && s[1]==s6[1]){
        for(int i =0;i<s.size();i++){
                if(i%3==0 && s[i]!=s6[0]){
                    s[i]=s6[0];
                    counter++;
                }
                else if(i%3==1 && s[i]!=s6[0]){
                    s[i]=s6[1];
                    counter++;
                }
                else if(i%3==2 && s[i]!=s6[2]){
                    s[i]=s6[2];
                    counter++;
                }

        }
        }

        cout<<counter<<endl;
        cout<<s<<endl;
        }
    }
        return 0;
}
