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
    void bfs(int s){
        bool *visited = new bool [v];
         for(int i=0;i<v;i++)
         {
             visited[i] = false;
         }

         list<int> queue;
         visited[s] =true;
         queue.push_back(s);
         list<int>::iterator i;
         while(!queue.empty())
         {
             s=queue.front();
             queue.pop_front();
             cout<<s<<endl;
             for(i=adj[s].begin();i!=s.end();i++)
             {
                 if(!visited[*i])
                 {
                     visited[*i]=true;
                     queue.push_back(*i);


                 }
             }
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
g.bfs(2);
}
