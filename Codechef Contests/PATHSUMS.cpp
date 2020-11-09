#include<bits/stdc++.h>
using namespace std;

#define pb push_back

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int v,e,x,y;

    cin>>v;

    int adj_node;

    stack<int> s;

    vector<int> tree[v+1];

    int value[v+1]={0};

    int visit[v+1] = {0};

    int ans[v+1] = {0};

    for(int i=0;i<v-1;i++)
    {
        cin>>x>>y;

        tree[x].pb(y);
        tree[y].pb(x);
    }

    s.push(1);
    value[1] = 1;

    while(!s.empty())
    {
       adj_node = s.top();
       s.pop();

       int flag = 0;

       if(!visit[adj_node])
        {
            visit[adj_node]=1;
            value[adj_node] = 1;

            if(value[ans[adj_node]] == 1) {value[adj_node] = 2;}
            else{ value[adj_node] = 1;}

        }

       for(int i=0; i<tree[adj_node].size(); i++)
       {
           if(!visit[tree[adj_node][i]])
           {
                s.push(tree[adj_node][i]);
               ans[tree[adj_node][i]] = adj_node;
           }
       }

    }

    for(int i=1;i<=v;i++)
    {
        cout<<value[i]<<" ";
    }

    cout<<endl;


    }
}
