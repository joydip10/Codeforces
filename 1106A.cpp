#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    IOS
   char matrix[505][505];
   int n;
   cin>>n;
   for(int i =0;i<n;i++)
   {
       for(int j =0;j<n;j++)
       {
           cin>>matrix[i][j];
       }
   }
   int counter=0;
   for(int i =1;i<n;i++)
   {
       for(int j=1;j<n;j++)
       {
           if((matrix[i][j]=='X')&&(matrix[i][j]==matrix[i-1][j-1])&&(matrix[i-1][j-1]==matrix[i-1][j+1]) && (matrix[i-1][j+1]==matrix[i+1][j-1]) &&( matrix[i+1][j-1]==matrix[i+1][j+1]))
           {
               counter++;
           }
       }
   }
   cout<<counter<<endl;
   return 0;
}
