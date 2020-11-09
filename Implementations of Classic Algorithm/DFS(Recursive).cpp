#include<bits/stdc++.h>
using namespace std;

#define pb push_back
int adj_node;

void dfs(int src, vector<int> tree[], int visit[])
{
    if(!visit[src]){cout<<src<<endl;visit[src] = 1;}

    //Traversing adjacency list of src
    for(int i=0; i< tree[src].size(); i++)
    {
       adj_node = tree[src][i];

       if(!visit[adj_node])
       {
       dfs(adj_node, tree, visit);
       }
    }
}

int main()
{
    int v,e,x,y;
    cin>>v>>e;

    vector<int> tree[v+1];

    int visit[v+1] = {0};

    for(int i=0;i<e;i++)
    {
        cin>>x>>y;

        tree[x].pb(y);
        tree[y].pb(x);
    }

    int source = 1;

    dfs(source, tree, visit);
}
