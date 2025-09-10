class Solution {
public:
    int countDigits(int num) {
        int rev= num; 
        int count =0;
        while(rev){
          int digi = rev%10;
          if( num% digi ==0){
            count++;
          }
           rev/=10;
        }
       return count;
    }
   
};