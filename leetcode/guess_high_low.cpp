/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long left=1,right=n,mid;
        
        while(left<=right){
            mid = (right+left)/2; //1+(10-1)/2 => 1+9/2=> 1+4 = 5
            if(guess(mid) == 0){
                return mid;
            }
            else if(guess(mid) == 1){
                left=mid+1;
            }
            else if(guess(mid) == -1){
                right=mid-1;
            }
        }
      return 0;
    }
};