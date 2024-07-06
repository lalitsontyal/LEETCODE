class Solution {
public:
    int passThePillow(int n, int time) {
        bool flag = true;
        int count=1;
        while(time>0)
        {
            if(flag)
                count += 1;
            else
                count -= 1;
            if(count == n)
                flag = !flag;
            if(count == 1)
                flag = !flag;
            time -= 1;
        }
        return count ;
    }
};