#include<bits/stdc++.h>

using namespace std;
    int arr[100004],length,queries,l,m;
    int imb_arr[100004];

int main()
{
    cin>>length>>queries;
    for( int i =1; i<=length; i++)
    {
        cin>>arr[i];
    }
    int imb=10000000;
    imb_arr[length]=imb;
    for(int i=length-1; i>=1; i--)
    {
        if(arr[i]<arr[i-1] && arr[i+1]>arr[i])
          {
            imb_arr[i]=imb;
            imb = i;
            continue;
          }
         if(arr[i]==arr[i-1] && arr[i+1]>arr[i])
        {
            int temp=i;
            while(arr[i]==arr[i-1])
            {
                imb_arr[i]=imb;
                i--;
            }
            if(arr[i]<arr[i-1])
                imb_arr[i]=imb;
                imb=temp;
                continue;
        }
        imb_arr[i]=imb;
    }
    imb_arr[1]=imb;
    while(queries--)
    {
        cin>>l>>m;


            if(imb_arr[l]>=m) printf("Yes\n");

            else printf("No\n");

    }
    return 0;
}
