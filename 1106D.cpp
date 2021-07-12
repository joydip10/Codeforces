#include<iostream>
#include<vector>
#define Max 100
bool seen[100];
using namespace std;
vector<int> graph[Max];
void dfs(int n)
{
    seen[n] = true;
    cout<<n<<" ";
    for(int i =0;i<graph[n].size();i++)
    {
        int v = graph[n][i];
        if(!seen[v]) dfs(v);
    }
}
void dfs_after()
{
    for(int i = 0;i<100;i++)
    {
        seen[i]=false;
    }
}
int main()
{


    for(int i = 0;;i++)
    {

        int a,b;

        if(cin>>a>>b && a!='\n' && b!='\n'){
        graph[a].push_back(b);
        graph[b].push_back(a);
        }
    }

    dfs(1);
    dfs_after();
    cout<<endl;
    dfs(2);
    dfs_after();

}
