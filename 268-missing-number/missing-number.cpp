class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size() +1;
        for(int i =0;i<n;i++){
            bool f = false ;
            for(int j =0;j<nums.size();j++){
               if(nums[j]==i){
                f = true;
                break;
               }
            }
         if(!f){
            return i;
        }     
       
     }
     return -1;
        }
      
};