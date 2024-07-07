class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
       int count = numBottles;
       while(numBottles - numExchange >= 0)
       {
            count += 1;
            numBottles = numBottles - numExchange;
            numBottles += 1;
       } 
       return count;
    }
};