#include <bits/stdc++.h>

using namespace std;


void BFS(int start, vector<vector<int>> &adj, vector<bool> &visited){
    queue<int> q;
    q.push(start);

    visited[start] = true;


    while(!q.empty()){
        int node = q.front();

        q.pop();

        cout << node << " ";

        for(int neighbor: adj[node]){
            if(!visited[neighbor]){
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

}


int main(){
    int n=6;

    vector<vector<int>> adj(n);
    vector<bool> visited(n, false);

    adj[0] = {3, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0, 4};
    adj[3] = {1, 5};
    adj[4] = {1, 2, 5};
    adj[5] = {3, 4};

    cout << "BFS a partir do nó 0: ";
    BFS(0, adj, visited);
    cout << endl;

    return 0;
}