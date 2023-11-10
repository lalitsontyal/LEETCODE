class Solution {
public:
void dfs(map<int,vector<int>>& graph,set<int>& elements,vector<int>& answer,int head)
{
    if(elements.find(head)!=elements.end())
    return;
    answer.push_back(head);
    elements.insert(head);
    for(auto i:graph[head])
    {
        dfs(graph,elements,answer,i);
    }

}
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        map<int,vector<int>> graph;
        for(auto i:adjacentPairs)
        {
            graph[i[0]].push_back(i[1]);
            graph[i[1]].push_back(i[0]);
        }
        set<int> elements;
        vector<int> answer;
        int one;
        for(auto i:graph)
        {
            if(i.second.size()==1)
            {
                one=i.first;
            }
        }
        dfs(graph,elements,answer,one);
        return answer;
    }
};