#include<bits/stdc++.h>
using namespace std;
struct trum
{
    int a;
    int b;
    int total;
};
int main()
{
    int n;
    cin>>n;
    vector<trum* > t;
    for(int i = 0 ;i<n;i++)
    {
        trum* tn= new trum();
        cin>>tn->a;
        cin>>tn->b;
        tn->total=0;
        t.push_back(tn);
    }
    int tnn=0;
    int i=0;
    for(vector<trum*>::iterator it = t.begin(); it!=t.end(); it++)
    {
        trum* p = *it;
        if(i==0 || i==n-1)
        {
            p->total  = p->a + p->b;
        }
        else
        {
            p->total = tnn - (p->a) + (p->b);
        }
        i++;
        tnn=p->total;
    }
    int maxtotal=0;
    for(vector<trum*>::iterator it = t.begin(); it!=t.end(); it++)
    {
        trum* p = *it;
        maxtotal=max(p->total,maxtotal);
    }
    cout<<maxtotal<<endl;

     for(vector<trum*>::iterator it = t.begin(); it!=t.end(); it++)
    {
        delete *it;
    }

    return 0;
}
