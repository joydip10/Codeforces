#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long m, tc, num, t = 1;

    cin>>num;
    long long arr[num];

    long long sum = 0, mxx = 0;
    for(long long i = 0; i < num; i++) {
        cin>>arr[i];
        sum += arr[i];
        mxx = max(mxx, arr[i]);
    }

    if(sum & 1 || mxx * 2 > sum) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}
