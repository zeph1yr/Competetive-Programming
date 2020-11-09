#include<bits/stdc++.h>
using namespace std;

#define pb push_back

int main()
{
    int v,e,x,y;

    cin>>v>>e;

    int adj_node;

    stack<int> s;

    vector<int> tree[v+1];

    int visit[v+1] = {0};

    for(int i=0;i<e;i++)
    {
        cin>>x>>y;

        tree[x].pb(y);
        tree[y].pb(x);
    }

    s.push(1);

    while(!s.empty())
    {
       adj_node = s.top();
       s.pop();

       if(!visit[adj_node])
        {
            cout<<adj_node<<endl;
            visit[adj_node]=1;
        }

       for(int i=0; i<tree[adj_node].size(); i++)
       {
           if(!visit[tree[adj_node][i]])
                s.push(tree[adj_node][i]);
       }

    }
}
