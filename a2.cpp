#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>

using namespace std;
int main()
{
    int num;
    int arr[130];
    cin>>num;
    for(int i =0;i<num ;i++){
        cin>>arr[i];
    }
    //if(arr[num-1]==arr[num-2]){ cout<<arr[num-1]<<" "<<arr[num-1]; return 0; }
    sort(arr,arr+num);
    int p=arr[num-1];

    int div[128],l;
    for(int i =1,k=0;i<=p;i++){
        if(p%i==0){
            div[k]=i;
            k++;
            l=k;
        }
    }

    for(int i=0;i<l;i++){
        for(int j=0;j<num;j++){
            if(div[i]==arr[j]){
                arr[j]=1;
                break;
            }
        }
    }
    sort(arr,arr+num);
    int q=arr[num-1];
    cout<<p<<" "<<q<<endl;
    return 0;
}
