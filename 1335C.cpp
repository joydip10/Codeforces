#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int test;
    cin>>test;
    long long int n;
    while(test--)
    {
        vector<long long int> rp_vec;
        vector<long long int>vec;

        bool checker=false;
        cin>>n;

        long long int arr[n];

        for(long long int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }

        sort(arr,arr+n);

        for(long long int i=0; i<n; i++)
        {
            long long int cnt=1;
            vec.push_back(arr[i]);
            while(arr[i]==arr[i+1] && (i+1)!=n)
            {
                cnt++;
                i++;
                checker=true;
            }
            if(cnt > 1)
                rp_vec.push_back(cnt-1);
            else
                rp_vec.push_back(cnt);
        }


        sort(rp_vec.begin(),rp_vec.end());


        long long int p,q;
        p=vec.size();
        q=rp_vec[rp_vec.size()-1];

        if(checker==true)
        {
            if(abs(p-q)<=1)
                cout<<min(p,q)<<endl;
            else if(abs(p-q)>1 && p!=1)
            {
                p--;
                q++;
                cout<<min(p,q)<<endl;
            }
            else{
                cout<<min(p,q)<<endl;
            }
        }
        else
        {
            cout<<min(p,q)<<endl;
        }
    }
    return 0;
}
