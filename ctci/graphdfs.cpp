#include<iostream>
#include<list>
using namespace std;

class graph{
    int v;
    list<int> *adj;
public:
    graph(int v){
     adj = new list<int>[v];
     this->v=v;

    }
    void addedge(int v,int w){
    adj[v].push_back(w);
    //adj[v].push_back(w); if not a directed graph
    }
    void printGraph()
    {
    for (int i = 0; i < v; ++i)
    {
        cout << "\n Adjacency list of vertex "
             << i << "\n head ";
        for (auto x : adj[i])
           cout << "-> " << x;
        printf("\n");
    }
    }
    void dfsu(int s,bool visited[])
    {
        visited[s] = true;
        cout<<s<<" ";
        list<int>::iterator i;
        for(i= adj[s].begin();i!=adj[s].end();i++){
            if(!visited[*i])
            {
                dfsu(*i,visited);
            }
        }
    }
    void dfs(int s){
        bool *visited = new bool[v];
        for(int i=0;i<v;i++)
        {
            visited[i]=false;
        }
        dfsu(s,visited);

    }


};

int main(){
graph g(4);
g.addedge(0, 1);
g.addedge(0, 2);
g.addedge(1, 2);
g.addedge(2, 0);
g.addedge(2, 3);
g.addedge(3, 3);
//g.printGraph();

g.dfs(2);
return 0;
}
