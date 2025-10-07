class Solution {
public:
    int maxBottlesDrunk(int x, int y)  {
        int ans = x ;
        while(x>=y){
            x-= y-1;
            y++;
            ans++;
        }
        return ans;
    }
};