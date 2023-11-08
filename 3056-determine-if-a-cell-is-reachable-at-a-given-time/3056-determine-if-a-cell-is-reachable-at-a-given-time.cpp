class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx==fx && sy==fy && t==1)
        return false;
        int x1=abs(sx-fx);
        int y1=abs(sy-fy);
        int max_time=max(x1,y1);
        if(t>=max_time)
        return true;
        return false;
    }
};