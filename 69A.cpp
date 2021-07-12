#include<iostream>
using namespace std;
int main()
{
   int num;
   cin>>num;
   int a,b,c,x=0,y=0,z=0;
   while(num--)
   {
       cin>>a>>b>>c;
       x=x+a;
       y=y+b;
       z=z+c;
   }
   if(x==0 && y==0 && z==0)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
   return 0;
}
