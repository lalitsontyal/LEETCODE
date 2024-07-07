class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
       int count = numBottles;
       while(numBottles >= numExchange)
       {
            count += 1;
            numBottles = numBottles - numExchange;
            numBottles += 1;
       } 
       return count;
    }
};