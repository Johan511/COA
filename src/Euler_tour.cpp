#include<bits/stdc++.h>
#include"Operations.h"
typedef long long ll;
using namespace std;

int main(){
    // priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
    Priority_Queue<pair<ll,ll>> pq(3,4);
    int n,m; 
    cin>>n>>m;
    vector<pair<ll,ll>> edges[n];

    for(int i = 0;i<m;i++){
        ll v1,v2,w;
        cin>>v1>>v2>>w;
        edges[v1].push_back({v2,w});
        edges[v2].push_back({v1,w});
    }

    ll vis[n] = {0};
    ll euler[2*n];
    ll i=0;



//Still coding
    // pq.insert({0,0});




    while(!pq.empty()){
        auto temp = pq.top();
         pq.delete_min();
        ll node = temp.first;
        ll cur_dist = temp.second;

        vis[node] = 1;
        dist[node] = cur_dist;

        for(auto x : edges[node]){
            if(!vis[x.first]){
                pq.insert({x.first,x.second})
                euler[i++] = x.first;
            }
        }
    
    for(int i = 0;i<2*n-1;i++)cout<<euler[i]<<" ";

}
