class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        map<int, vector<pair<int, int>>> graph;
        for(int i = 0;i < times.size() ; i++)
        {
            int src = times[i][0];
            if(!(graph.find(src) != graph.end()))
            {
                graph[src];
            }
            graph[src].push_back(pair<int, int>(times[i][1], times[i][2]));
        }
       
        int* distances = new int[n+1];
        int* visited = new int[n+1];
        priority_queue<pair<int, int>> q;
        memset(distances, 0 , sizeof(distances));
        for(int i = 0 ; i <= n ; i++)
            visited[i] = false;
      
        q.push(make_pair(0,k));
        while(!q.empty())
        {
            pair<int,int> node = q.top();
            q.pop();
            
            
            if(visited[node.second])
                continue;
           
            distances[node.second] = -node.first;
            visited[node.second] = true;
            
            for(int i=0;i<graph[node.second].size();i++)
            {
                int child = graph[node.second][i].first;
                q.push(make_pair(-graph[node.second][i].second - distances[node.second], child));
            }
        }
        
       
        int res = 0;
        for(int i = 1; i<=n;i++)
        {
            //cout<<distances[i]<<endl;
            if(!visited[i])
                return -1;
            res = max(res, distances[i]);
        }
            
            
        return res;
    }
};