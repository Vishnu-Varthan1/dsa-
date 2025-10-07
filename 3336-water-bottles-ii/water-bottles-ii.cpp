class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int bottleDrunk = numBottles;

        while(numExchange <= numBottles){
            bottleDrunk++;
            numBottles -= numExchange - 1;
            numExchange++;
        }


        return  bottleDrunk;
    }
};