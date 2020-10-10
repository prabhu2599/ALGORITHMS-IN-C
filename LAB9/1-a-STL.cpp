#include <vector>
#include <numeric>
#include <iostream>
#include <queue>

using namespace std;
void bfsYahan() {
    
    int n,e;
    cin>>n>>e;
    vector<int> adj[n];

    for(int i = 0; i < e ; i++) {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        //adj[b].push_back(a);
    }

    cout<<endl<<"-----------------------------------"<<endl;
    for(int i=0;i<n;i++) {
        cout<<i<<"-> ";
        for(auto j: adj[i]) {
         cout<<j<<",";
        }
        cout<<endl;
    }

    cout<<endl<<"BFS here se :"<<endl;
    vector<bool> visited;
    visited.assign(n, false); 
    queue<int> q;
    q.push(0);

    while (!q.empty()) {
        int h = q.front();
        q.pop();

        cout<<h<<" ";

        for(auto i = adj[h].begin();i != adj[h].end(); i++) {
            if(!visited[*i]) {
                q.push(*i);
                visited[*i] = true;
            }
        }
    }


}

int main() {
    bfsYahan();

    cout<<endl;
    return 69;
}
