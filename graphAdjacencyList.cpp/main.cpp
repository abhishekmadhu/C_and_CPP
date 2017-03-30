/*
 Adjacency list of a graph
 
 @coder_nigga
 -Abhishek Madhu
 
*/

#include<bits/stdc++.h>
#include<vector>
#define MAX 10  //MAX is the number of relations in the graph
using namespace std;

vector <int> adj[MAX];

int main()
{
    int x, y, nodes, edges;
    cin>>nodes;
    cin>>edges;
    for(int i = 0; i<=edges-1; i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
    }
    for(int i = 1; i<=nodes; i++){
        for (int j= 0; j<adj[i].size();j++){
            if(j==adj[i].size()-1){
                cout<<adj[i][j]<<endl;
            }
            else{
                cout<<adj[i][j]<<" --> ";
            }
        }
    }
    //cout<<"alpha";
    return 0;
}