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


};

int main(){
graph g(4);
g.addedge(1,2);
g.addedge(2,3);
g.addedge(0,3);
g.addedge(1,3);
g.printGraph();
return 0;
}
