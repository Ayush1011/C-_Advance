#include <bits/stdc++.h> 
using namespace std; 
  
class Graph 
{ 
    int V;    // No. of vertices 
    list<int> *adj;    // adjacency lists 
  
    // A recursive function to print DFS starting from v 
    void DFSUtil(int v, vector<bool> &visited); 
public: 
    Graph(int V); 
    void addEdge(int v, int w); 
    int findMother(); 
}; 
  
Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 
  
// A recursive function to print DFS starting from v 
void Graph::DFSUtil(int v, vector<bool> &visited) 
{ 
    // Mark the current node as visited and print it 
    visited[v] = true; 
  
    // Recur for all the vertices adjacent to this vertex 
    list<int>::iterator i; 
    for (i = adj[v].begin(); i != adj[v].end(); ++i) 
        if (!visited[*i]) 
            DFSUtil(*i, visited); 
} 
  
void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w); // Add w to v’s list. 
} 



int Graph::findMother() {

    int v;
    vector<bool>visited = {false};
    for(int i=0;i<V;i++){
        if(visited[i]==false){
            
            DFSUtil(i,visited);
            v=i;
        }
    }



    for(auto i=adj[v].begin();i!=adj[v].end();i++){
        if(visited[*i]==false){
            return -1;
        }
    }
    return v;
}







  // Driver program to test above functions 
int main() 
{ 
    // Create a graph given in the above diagram 
    Graph g(7); 
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 3); 
    g.addEdge(4, 1); 
    g.addEdge(6, 4); 
    g.addEdge(5, 6); 
    g.addEdge(5, 2); 
    g.addEdge(6, 0); 
  
    cout << "A mother vertex is " << g.findMother(); 
  
    return 0; 
} 