class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
      vector<int> tim;
      for(int i=0;i<dist.size();i++)
      {
          int x=ceil(dist[i]/(double)speed[i]);
          tim.push_back(x);
      }  
      sort(tim.begin(),tim.end());
      int count=0;
      for(int i=0;i<tim.size();i++)
      {
          if(count>=tim[i])
          return count;
          count++;
      }
      return tim.size();
    }
};